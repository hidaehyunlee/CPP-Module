/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 23:31:50 by daelee            #+#    #+#             */
/*   Updated: 2021/04/25 00:55:38 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
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

    std::cout << "> ScavTrap: \"Look out, everybody, things are about to get awesome!\"" << std::endl;
    std::cout << "ScavTrap<" << name << "> 생성" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav_trap)
{
    srand(time(NULL));

    *this = scav_trap;

    std::cout << "> ScavTrap: \"Look out, everybody, things are about to get awesome!\"" << std::endl;
    std::cout << "ScavTrap<" << name << "> 생성" << std::endl;
}

ScavTrap::ScavTrap(const std::string &_name)
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

    std::cout << "> ScavTrap: \"Look out, everybody, things are about to get awesome!\"" << std::endl;
    std::cout << "> ScavTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "> 클랩트랩의 꿈이 또 한번 산산조각이 났군요. 하!" << std::endl;
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

void ScavTrap::rangedAttack(std::string const &target)
{
    std::cout << "> ScavTrap<" << name << ">(이)가 <" << target << ">을(를) 원거리에서 공격했다! 적은 <" << ranged_attack_damage << ">의 데미지를 입었다!" << std::endl;
    std::cout << "> ScavTrap<" << name << ">: \"Wow! You're not dead?\"" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
    std::cout << "> ScavTrap<" << name << ">(이)가 <" << target << ">을(를) 근거리에서 공격했다! 적은 <" << melee_attack_damage << ">의 데미지를 입었다!" << std::endl;
    std::cout << "> ScavTrap<" << name << ">: \"Wow! You're not dead?\"" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (armor_damage_reduction >= amount)
        amount = 0;
    else
        amount -= armor_damage_reduction;
    std::cout << "> ScavTrap<" << name << ">(이)가 <" << amount << ">만큼 공격받았다!" << std::endl;
    std::cout << "> ScavTrap<" << name << ">: \"Oh my God, I'm leaking! I think I'm leaking! Ahhhh, I'm leaking! There's oil everywhere!\"" << std::endl;

    if (hit_points <= amount)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "[ HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "> ScavTrap<" << name << ">(이)가 HP와 EP를 <" << amount << ">만큼 회복했다!" << std::endl;
    std::cout << "> ScavTrap<" << name << ">: \"Good as new, I think. Am I leaking ?\"" << std::endl;

    hit_points += amount;
    energy_points += amount;
    if (max_hit_points < hit_points)
        hit_points = max_hit_points;
    if (max_energy_points < energy_points)
        energy_points = max_energy_points;

    std::cout << "[ HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}
