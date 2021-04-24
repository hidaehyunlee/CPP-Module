/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:24 by daelee            #+#    #+#             */
/*   Updated: 2021/04/24 23:02:24 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	srand(time(NULL));
	
	hit_points = 100;
	max_hit_points = 100;
	energy_points = 100;
	max_energy_points = 100;
	level = 1;
	name = "FR4G-TP";
	melee_attack_damage = 30;
	ranged_attack_damage = 20;
	armor_damage_reduction = 5;

	std::cout << "> 아이쿠! 클랩트랩을 선택할 뻔하셨습니다. 간 떨어질 뻔했네! 일부러 고를 리가 없을 테니까요!... 그렇죠?" << std::endl;
	std::cout << "> 잠깐만요, 클랩트랩이 어떤 놈인지 알잖아요? 활기만 들어차서 정신은 하나도 없고 말만 많고... 진심이십니까?" << std::endl;
	std::cout << "> 정말요? 클랩트랩을?! 괴상한 액션 스킬 이야기는 읽어 보셨습니까? 정말로, 정말로 고르시겠다는 건가요?" << std::endl;
	std::cout << "FragTrap<" << name << "> 생성" << std::endl;
}

FragTrap::FragTrap(const FragTrap& frag_trap)
{
	srand(time(NULL));
	
	*this = frag_trap;

	std::cout << "> 아이쿠! 클랩트랩을 선택할 뻔하셨습니다. 간 떨어질 뻔했네! 일부러 고를 리가 없을 테니까요!... 그렇죠?" << std::endl;
	std::cout << "> 잠깐만요, 클랩트랩이 어떤 놈인지 알잖아요? 활기만 들어차서 정신은 하나도 없고 말만 많고... 진심이십니까?" << std::endl;
	std::cout << "> 정말요? 클랩트랩을?! 괴상한 액션 스킬 이야기는 읽어 보셨습니까? 정말로, 정말로 고르시겠다는 건가요?" << std::endl;
	std::cout << "FragTrap<" << name << "> 생성" << std::endl;
}

FragTrap::FragTrap(const std::string& _name)
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

	std::cout << "> 아이쿠! 클랩트랩을 선택할 뻔하셨습니다. 간 떨어질 뻔했네! 일부러 고를 리가 없을 테니까요!... 그렇죠?" << std::endl;
	std::cout << "> 잠깐만요, 클랩트랩이 어떤 놈인지 알잖아요? 활기만 들어차서 정신은 하나도 없고 말만 많고... 진심이십니까?" << std::endl;
	std::cout << "> 정말요? 클랩트랩을?! 괴상한 액션 스킬 이야기는 읽어 보셨습니까? 정말로, 정말로 고르시겠다는 건가요?" << std::endl;
	std::cout << "> FragTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "> 클랩트랩의 꿈이 또 한번 산산조각이 났군요. 하!" << std::endl;
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
	
	return *this;
}

void		FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "> FragTrap<" << name << ">(이)가 <" << target << ">을(를) 원거리에서 공격했다! 적은 <" << ranged_attack_damage << ">의 데미지를 입었다!" << std::endl;
}

void		FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "> FragTrap<" << name << ">(이)가 <" << target << ">을(를) 근거리에서 공격했다! 적은 <" << melee_attack_damage << ">의 데미지를 입었다!" << std::endl;
}

void		FragTrap::takeDamage(unsigned int amount)
{
	if (armor_damage_reduction >= amount)
		amount = 0;
	else
		amount -= armor_damage_reduction;

	std::cout << "> FragTrap<" << name << ">(이)가 <" << amount << ">만큼 공격받았다!" << std::endl;

	if (hit_points <= amount)
		hit_points = 0;
	else
		hit_points -= amount;

	std::cout << "[ HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}

void		FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "> FragTrap<" << name << ">(이)가 HP와 EP를 <" << amount << ">만큼 회복했다!" << std::endl;

	hit_points += amount;
	energy_points += amount;
	if (max_hit_points < hit_points)
		hit_points = max_hit_points;
	if (max_energy_points < energy_points)
		energy_points = max_energy_points;

	std::cout << "[ HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
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

	std::cout << "[ HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
	std::cout << std::endl;
}
