/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 20:23:08 by daelee            #+#    #+#             */
/*   Updated: 2021/04/21 20:47:39 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_H_HPP
# define HUMAN_H_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name) : name(name) {};
	void attack(void) const;
	void setWeapon(Weapon &weapon); //포인터를 참조로 전달하고 함수가 포인터의 주소를 완전히 변경하도록 해야한다.
};

#endif