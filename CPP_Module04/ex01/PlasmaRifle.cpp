/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:33:15 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:50:44 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& other) :  AWeapon(other.name, other.apcost, other.damage) {}

PlasmaRifle::~PlasmaRifle() {}

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle& other)
{
	AWeapon::operator=(other);
	return *this;
}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
