/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 23:31:50 by daelee            #+#    #+#             */
/*   Updated: 2021/04/25 14:49:33 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    srand(time(NULL));

    hit_points = 100;
    max_hit_points = 100;
    energy_points = 50;
    max_energy_points = 50;
    level = 1;
    name = "SC4V-TP";
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    type = "ScavTrap";

    std::cout << "> \"Look out, everybody, things are about to get awesome!\"" << " ScavTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap)
{
    srand(time(NULL));

    *this = scav_trap;

    std::cout << "> \"Look out, everybody, things are about to get awesome!\"" << " ScavTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name) : ClapTrap(_name)
{
    srand(time(NULL));

    hit_points = 100;
    max_hit_points = 100;
    energy_points = 50;
    max_energy_points = 50;
    level = 1;
    name = _name;
    melee_attack_damage = 20;
    ranged_attack_damage = 15;
    armor_damage_reduction = 3;
    type = "ScavTrap";

    std::cout << "> \"Look out, everybody, things are about to get awesome!\"" << " ScavTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "> ScavTrap<" << name << ">: \"I can see... the code...\"" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav_trap)
{
    std::cout << "> Assignation operator called" << std::endl;

    hit_points = scav_trap.hit_points;
    max_hit_points = scav_trap.max_hit_points;
    energy_points = scav_trap.energy_points;
    max_energy_points = scav_trap.max_energy_points;
    level = scav_trap.level;
    name = scav_trap.name;
    melee_attack_damage = scav_trap.melee_attack_damage;
    ranged_attack_damage = scav_trap.ranged_attack_damage;
    armor_damage_reduction = scav_trap.armor_damage_reduction;

    return *this;
}

void ScavTrap::challengeNewcomer(void)
{
    std::string challenges[5] = {"외바퀴로 계단 오르기!", "애완동물 알레르기 견디기!", "댄스 프로토콜 실행하기!", "문 열기!", "항성간 닌자 암살자 클랩트랩으로 진화하기"};

    int challenge_num = rand() % 5;
    std::cout << "> ScavTrap<" << name << ">: \"도전! " << challenges[challenge_num] << "\"" << std::endl;
}
