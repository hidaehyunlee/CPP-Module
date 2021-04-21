/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:22:45 by daelee            #+#    #+#             */
/*   Updated: 2021/04/21 20:45:17 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon& weapon;

public:
	HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){};
	void attack(void) const;
};

#endif
