/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:28:33 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 17:50:30 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap()
{
    srand(time(NULL));

    hit_points = 60;
    max_hit_points = 60;
    energy_points = 120;
    max_energy_points = 120;
    level = 1;
    name = "NJ4V-TP";
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
    type = "NinjaTrap";

    std::cout << "> \"슈-우-욱!\"" << " NinjaTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninja_trap)
{
    srand(time(NULL));

    *this = ninja_trap;

    std::cout << "> \"슈-우-욱!\"" << " NinjaTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

NinjaTrap::NinjaTrap(const std::string &_name) : ClapTrap(_name)
{
    srand(time(NULL));

    hit_points = 60;
    max_hit_points = 60;
    energy_points = 120;
    max_energy_points = 120;
    level = 1;
    name = _name;
    melee_attack_damage = 60;
    ranged_attack_damage = 5;
    armor_damage_reduction = 0;
    type = "NinjaTrap";

    std::cout << "> \"슈-우-욱!\"" << " NinjaTrap<" << name << ">(이)가 생성되었다!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "> " << getType() << "<" << getName() << ">: \"Please don't shoot me, please don't shoot me, please don't shoot me!\"" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &ninja_trap)
{
    std::cout << "> Assignation operator called" << std::endl;

    hit_points = ninja_trap.hit_points;
    max_hit_points = ninja_trap.max_hit_points;
    energy_points = ninja_trap.energy_points;
    max_energy_points = ninja_trap.max_energy_points;
    level = ninja_trap.level;
    name = ninja_trap.name;
    melee_attack_damage = ninja_trap.melee_attack_damage;
    ranged_attack_damage = ninja_trap.ranged_attack_damage;
    armor_damage_reduction = ninja_trap.armor_damage_reduction;
    type = ninja_trap.type;

    return *this;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
    std::cout << "> \"휘익...\" " << type << "<" << name << ">(이)가 " << target.getType() << "<" << target.getName() << ">(을)를 공격했다!" << std::endl;
    target.takeDamage(60);
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
    std::cout << "> \"휘익...\" " << type << "<" << name << ">(이)가 " << target.getType() << "<" << target.getName() << ">(을)를 공격했다!" << std::endl;
    target.takeDamage(60);
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
    std::cout << "> \"휘익...\" " << type << "<" << name << ">(이)가 " << target.getType() << "<" << target.getName() << ">(을)를 공격했다!" << std::endl;
    target.takeDamage(60);
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
    std::cout << "> \"휘익...\" " << type << "<" << name << ">(이)가 " << target.getType() << "<" << target.getName() << ">(을)를 공격했다!" << std::endl;
    target.takeDamage(60);
}