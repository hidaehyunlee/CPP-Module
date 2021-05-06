/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:59:02 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 14:20:32 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(void);
	MutantStack(const MutantStack<T>& other);
	~MutantStack();

	MutantStack<T>& operator=(const MutantStack<T> & other);

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator	begin(void);
	iterator	end(void);
};

#endif
