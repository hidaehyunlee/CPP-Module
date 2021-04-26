/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 21:43:44 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	ScavTrap st("스카브");
	std::cout << std::endl;
	SuperTrap super_trap("슈퍼");

	std::cout << std::endl;

	super_trap.meleeAttack("robot1");
	super_trap.rangedAttack("robot2");

	std::cout << std::endl;

	super_trap.vaulthunter_dot_exe("BOSS");

	std::cout << std::endl;

	super_trap.ninjaShoebox(st);

	std::cout << std::endl;

	return 0;
}
