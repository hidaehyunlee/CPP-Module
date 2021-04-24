/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/24 23:03:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	std::cout << "_____________________________________" << std::endl;
	std::cout << "|     BODERLANDS: The Pre-Sequel    |" << std::endl;
	std::cout << "|___________________________________|" << std::endl;
	std::cout << "|           플레이어 선택           |" << std::endl;
	std::cout << "|------.----------.--------.--------|" << std::endl;
	std::cout << "| 니샤 | 클랩트랩 | 빌헬름 | 아테나 |" << std::endl;
	std::cout << "|______|__________|________|________|" << std::endl;

	std::cout << std::endl;
	
	FragTrap ft("42");

	std::cout << std::endl;

	ft.rangedAttack("스캐빈저");
	ft.meleeAttack("루나틱");

	std::cout << std::endl;

	ft.vaulthunter_dot_exe("다크사이더스");
	ft.vaulthunter_dot_exe("다크사이더스");
	ft.vaulthunter_dot_exe("다크사이더스");
	ft.vaulthunter_dot_exe("다크사이더스");
	ft.vaulthunter_dot_exe("다크사이더스");

	std::cout << std::endl;

	ft.takeDamage(55);
	ft.takeDamage(65);

	std::cout << std::endl;

	ft.beRepaired(30);
	ft.beRepaired(90);

	std::cout << std::endl;
	
	ft.takeDamage(100);

	std::cout << std::endl;

	return 0;
}
