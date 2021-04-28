/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:25 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:51:40 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(const PowerFist& other) : AWeapon(other.name, other.apcost, other.damage) {}

PowerFist::~PowerFist() {}

PowerFist& PowerFist::operator=(const PowerFist& other)
{
	AWeapon::operator=(other);
	return *this;
}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
