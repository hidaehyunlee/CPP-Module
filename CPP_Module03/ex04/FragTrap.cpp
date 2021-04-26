/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:24 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 12:44:57 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	srand(time(NULL));

	ClapTrap::hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = "FR4G-TP";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	type = "FlagTrap";

	std::cout << "> \"네 새로운 형식명은 FR4G-TP. 프랙트랩이다. 너는 이제부터 무자비한 살인 기계야. 알아들었어?\"" << " FragTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag_trap)
{
	srand(time(NULL));
	
	*this = frag_trap;

	std::cout << "> \"네 새로운 형식명은 FR4G-TP. 프랙트랩이다. 너는 이제부터 무자비한 살인 기계야. 알아들었어?\"" << " FragTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

FragTrap::FragTrap(const std::string &_name) : ClapTrap(_name)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = _name;
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;
	type = "FlagTrap";

	std::cout << "> \"네 새로운 형식명은 FR4G-TP. 프랙트랩이다. 너는 이제부터 무자비한 살인 기계야. 알아들었어?\"" << " FragTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "> FragTrap<" << name << ">: \"Sure is lonely around here.\"" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& frag_trap)
{
	std::cout << "> Assignation operator called" << std::endl;

	hit_points = frag_trap.hit_points;
	max_hit_points = frag_trap.max_hit_points;
	energy_points = frag_trap.energy_points;
	max_energy_points = frag_trap.max_energy_points;
	level = frag_trap.level;
	name = frag_trap.name;
	melee_attack_damage = frag_trap.melee_attack_damage;
	ranged_attack_damage = frag_trap.ranged_attack_damage;
	armor_damage_reduction = frag_trap.armor_damage_reduction;
	type = frag_trap.type;

	return *this;
}

void		FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string 	skill_name[5] = {"Minion Trap", "Gun Wizard", "Torgue Fiesta", "One Shot Wonder", "Laser Inferno"};
	std::string 	skill_call[5] = {"> \"미니언 대령이요!\"", "> \"총에 마법 걸어줄게, 매~직 불릿!\"", "> \"공짜 수류탄 선물이야!!!\"", "> \"전탄을 쏟아, 한 발을 위하여.\"", "> \"디스코는 죽지않아... 그치만 넌 죽어!\""};
	int				damages[5] = {10, 20, 30, 40, 50};

	if (energy_points < 25)
	{
		std::cout << "> FragTrap<" << name << ">(은)는 EP가 부족해 스킬을 사용할 수 없다!" << std::endl;
	}
	else
	{
		energy_points -= 25;
		int skill_num = rand() % 5;
		std::cout << skill_call[skill_num] << " FragTrap<" << name << ">(이)가 <" << target << ">에게 <" << skill_name[skill_num] << "> 스킬을 사용했다! 적은 <" << damages[skill_num] << ">의 데미지를 입었다!" << std::endl;
	}

	std::cout << "[ "<< "FragTrap<" << name  << "> | HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}
