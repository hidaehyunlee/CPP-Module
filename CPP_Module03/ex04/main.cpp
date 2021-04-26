/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 17:47:47 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	FragTrap ft("프랙");
	NinjaTrap nt("닌자");

	std::cout << std::endl;

	SuperTrap super_trap("슈퍼");

	std::cout << std::endl;

	super_trap.meleeAttack("robot1");
	super_trap.rangedAttack("robot2");

	std::cout << std::endl;

	super_trap.takeDamage(120);

	std::cout << std::endl;

	super_trap.beRepaired(50);

	std::cout << std::endl;

	super_trap.vaulthunter_dot_exe("robot3");
	super_trap.vaulthunter_dot_exe("robot4");

	std::cout << std::endl;

	super_trap.ninjaShoebox(ft);
	super_trap.ninjaShoebox(nt);

	std::cout << std::endl;

	return 0;
}
