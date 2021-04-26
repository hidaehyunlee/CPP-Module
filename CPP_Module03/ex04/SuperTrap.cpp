/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:31:51 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 18:07:02 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void) : FragTrap(), NinjaTrap()
{
    srand(time(NULL));

    hit_points = 100;
    max_hit_points = 100;
    energy_points = 120;
    max_energy_points = 120;
    level = 1;
    name = "SP4V-TP";
    melee_attack_damage = 60;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    type = "SuperTrap";

    std::cout << "> \"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!\"" << " SuperTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &super_trap)
{
    srand(time(NULL));

    *this = super_trap;

    std::cout << "> \"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!\"" << " SuperTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

SuperTrap::SuperTrap(const std::string &_name) : FragTrap(), NinjaTrap()
{
    srand(time(NULL));

    hit_points = 100;
    max_hit_points = 100;
    energy_points = 120;
    max_energy_points = 120;
    level = 1;
    name = _name;
    melee_attack_damage = 60;
    ranged_attack_damage = 20;
    armor_damage_reduction = 5;
    type = "SuperTrap";

    std::cout << "> \"I am the best robot. Yeah, yeah, yeah, I am the best robot. Ooh, ooh, here we go!\"" << " SuperTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

SuperTrap::~SuperTrap()
{
    std::cout << "> " << getType() << "<" << getName() << ">: \"움직일 수가 없어! 공포로 몸이 마비됐어요!\"" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &super_trap)
{
    std::cout << "> Assignation operator called" << std::endl;

    hit_points = super_trap.hit_points;
    max_hit_points = super_trap.max_hit_points;
    energy_points = super_trap.energy_points;
    max_energy_points = super_trap.max_energy_points;
    level = super_trap.level;
    name = super_trap.name;
    melee_attack_damage = super_trap.melee_attack_damage;
    ranged_attack_damage = super_trap.ranged_attack_damage;
    armor_damage_reduction = super_trap.armor_damage_reduction;
    type = super_trap.type;

    return *this;
}

void SuperTrap::rangedAttack(std::string const &target)
{
    FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
    NinjaTrap::meleeAttack(target);
}