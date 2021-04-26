/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 13:32:00 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	FragTrap ft("프랙");
	ScavTrap st("스카브");
	
	std::cout << std::endl;
	
	NinjaTrap nt("닌자");

	std::cout << std::endl;

	nt.ninjaShoebox(ft);
	std::cout << std::endl;
	nt.ninjaShoebox(st);
	std::cout << std::endl;
	nt.ninjaShoebox(nt);

	std::cout << std::endl;

	return 0;
}
