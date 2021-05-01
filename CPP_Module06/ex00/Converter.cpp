/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 15:17:42 by daelee            #+#    #+#             */
/*   Updated: 2021/05/02 00:47:48 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

Converter::Converter() {}

Converter::Converter(const Converter&) {}

Converter::~Converter() {}

Converter &Converter::operator=(const Converter &other)
{
	if (this == &other)
		return (*this);
	return *this;
}

char Converter::toChar(double f)
{
	char value = static_cast<char>(f);
	if (std::isinf(f) || std::isnan(f))
		throw std::string("impossible");
	else if (value < 32 || value > 126)
		throw std::string("Non displayable");
	return (value);
}

int Converter::toInt(double f)
{
	int i = static_cast<int>(f);
	if (std::isinf(f) || std::isnan(f) || f > INT_MAX || f < INT_MIN)
		throw std::string("impossible");
	return (i);
}

float Converter::toFloat(double f)
{
	return (static_cast<float>(f));
}

double Converter::toDouble(double f)
{
	return (static_cast<double>(f));
}

const char *Converter::NotConvertible::what() const throw() { return ("Invalid format or can't be converted."); }
