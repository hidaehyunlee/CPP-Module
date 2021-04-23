/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 01:31:40 by daelee            #+#    #+#             */
/*   Updated: 2021/04/22 17:45:58 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    raw_bits_ = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    raw_bits_ = value << fractional_bits_;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    raw_bits_ = roundf(value * (1 << fractional_bits_));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    raw_bits_ = fixed.raw_bits_;
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (raw_bits_);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    raw_bits_ = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)raw_bits_) / (1 << fractional_bits_);
}

int Fixed::toInt(void) const
{
    return (raw_bits_ >> fractional_bits_);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
    os << fixed.toFloat();
    return (os);
}