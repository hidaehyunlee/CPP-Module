/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:15:54 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 20:15:30 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template<typename T>
class Array
{
	T *array_;
	unsigned int size_;

public:
	Array(void) : array_(new T[0]()), size_(0) {};
	Array(unsigned int n) : array_(new T[n]), size_(n) {};
	Array(const Array& other)
	{
		*this = other;
	};
	~Array()
	{
		delete [] array_;
	};

	Array& operator=(const Array& other)
	{
		if (this == &other)
			return *this;

		if (size_ != other.size_)
		{
			if (array_)
				delete[] array_;
			size_ = other.size_;
			array_ = new T[size_];
		}

		for (unsigned int i = 0; i < size_; i++)
		{
			array_[i] = other.array_[i];
		}
		return *this;
	};

	T& operator[](const unsigned int idx)
	{
		if (idx < 0 || size_ <= idx)
			throw Array::IndexErrorException();
		
		return array_[idx];
	};

	const T& operator[](const unsigned int idx) const
	{
		if (idx < 0 || size_ <= idx)
			throw Array::IndexErrorException();
		
		return array_[idx];
	};

	unsigned int size(void) const { return size_; };

	class IndexErrorException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "Error: This element is out of the limits!";
		}
	};
};

#endif
