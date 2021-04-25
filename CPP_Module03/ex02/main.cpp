/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/25 14:41:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft("프랙");
	ScavTrap st("스카브");

	std::cout << std::endl;

	ft.vaulthunter_dot_exe("다크사이더스");

	std::cout << std::endl;

	st.takeDamage(65);

	std::cout << std::endl;

	st.beRepaired(30);

	std::cout << std::endl;

	st.challengeNewcomer();

	std::cout << std::endl;
	
	return 0;
}
