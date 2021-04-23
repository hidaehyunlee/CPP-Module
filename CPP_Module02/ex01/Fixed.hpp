/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 01:31:37 by daelee            #+#    #+#             */
/*   Updated: 2021/04/22 17:02:33 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    int raw_bits_;
    const static int fractional_bits_ = 8;

public:
    Fixed(void);
    Fixed(const Fixed &fixed);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    Fixed &operator=(const Fixed &fixed);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
