/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:32:42 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 18:46:19 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void) : name("defaut_name"), apcost(0), damage(0) {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage) {}

AWeapon::AWeapon(const AWeapon& other)
{
	*this = other;
}

AWeapon::~AWeapon(void) {}

AWeapon& AWeapon::operator=(const AWeapon& other)
{
	this->name = other.name;
	this->apcost = other.apcost;
	this->damage = other.damage;
	return *this;
}

std::string const AWeapon::getName(void) const
{
	return name;
}

int AWeapon::getAPCost(void) const
{
	return apcost;
}

int AWeapon::getDamage(void) const
{
	return damage;
}
