/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:23:03 by daelee            #+#    #+#             */
/*   Updated: 2021/04/21 20:47:33 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::setWeapon(Weapon& weapon) 
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}