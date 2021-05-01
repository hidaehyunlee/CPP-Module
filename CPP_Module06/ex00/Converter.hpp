/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:17:51 by daelee            #+#    #+#             */
/*   Updated: 2021/05/02 00:38:50 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <cmath>
# include <climits>
# include <limits>

class Converter
{
public:
	Converter(void);
	Converter(const Converter&);
	~Converter();

	Converter& operator=(const Converter& other);

	char toChar(double);
	int toInt(double);
	float toFloat(double);
	double toDouble(double);

	class NotConvertible : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

#endif
