/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 22:12:42 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

int main(void)
{
	std::cout << ".-------------------------." << std::endl;
	std::cout << "|        전쟁 모드        |" << std::endl;
	std::cout << "|_________________________|" << std::endl;
	
	SuperTrap super_trap("슈퍼");

	std::cout << std::endl;

	super_trap.meleeAttack("robot1");
	super_trap.rangedAttack("robot2");

	std::cout << std::endl;

	super_trap.vaulthunter_dot_exe("BOSS");

	std::cout << std::endl;

	{
		std::cout << ".-------------------------." << std::endl;
		std::cout << "|        댄스 타임        |" << std::endl;
		std::cout << "|_________________________|" << std::endl;
		
		ScavTrap st("스카브");
		std::cout << std::endl;

		super_trap.ninjaShoebox(st);
		std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << ".-------------------------." << std::endl;
	std::cout << "|        게임 종료        |" << std::endl;
	std::cout << "|_________________________|" << std::endl;
	return 0;
}
