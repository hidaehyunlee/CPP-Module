/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 13:32:02 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 21:57:59 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
    srand(time(NULL));

    hit_points = 50;
    max_hit_points = 50;
    energy_points = 25;
    max_energy_points = 25;
    level = 1;
    name = "CL4P-TP";
    melee_attack_damage = 5;
    ranged_attack_damage = 3;
    armor_damage_reduction = 10;
    type = "ClapTrap";

    std::cout << "[ 부팅 절차 완료. 형식명: 하이페리온 로봇, C 등급, CL4P-TP. 사용 이전에 필요에 따라 초기화 셋팅을 조절하여 주십시오. ]" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap_trap)
{
    srand(time(NULL));

    *this = clap_trap;

    std::cout << "[ 부팅 절차 완료. 형식명: 하이페리온 로봇, C 등급, CL4P-TP. 사용 이전에 필요에 따라 초기화 셋팅을 조절하여 주십시오. ]" << std::endl;
}

ClapTrap::ClapTrap(const std::string &_name)
{
    srand(time(NULL));

    hit_points = 50;
    max_hit_points = 50;
    energy_points = 25;
    max_energy_points = 25;
    level = 1;
    name = _name;
    melee_attack_damage = 5;
    ranged_attack_damage = 3;
    armor_damage_reduction = 10;
    type = "ClapTrap";

    std::cout << "[ 부팅 절차 완료. 형식명: 하이페리온 로봇, C 등급, CL4P-TP. 사용 이전에 필요에 따라 초기화 셋팅을 조절하여 주십시오. ]" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "[ 클랩트랩의 꿈이 또 한번 산산조각이 났군요. 하! ]" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap_trap)
{
    std::cout << "> Assignation operator called" << std::endl;

    hit_points = clap_trap.hit_points;
    max_hit_points = clap_trap.max_hit_points;
    energy_points = clap_trap.energy_points;
    max_energy_points = clap_trap.max_energy_points;
    level = clap_trap.level;
    name = clap_trap.name;
    melee_attack_damage = clap_trap.melee_attack_damage;
    ranged_attack_damage = clap_trap.ranged_attack_damage;
    armor_damage_reduction = clap_trap.armor_damage_reduction;
    type = clap_trap.type;

    return *this;
}

void ClapTrap::rangedAttack(std::string const &target)
{
    std::cout << "> \"오우! 아직 살아있네?\" "
              << type << "<" << name << ">(이)가 <" << target << ">을(를) 원거리에서 공격했다! 적은 <" << ranged_attack_damage << ">의 데미지를 입었다!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
    std::cout << "> \"오우! 아직 살아있네?\" "
              << type << "<" << name << ">(이)가 <" << target << ">을(를) 근거리에서 공격했다! 적은 <" << ranged_attack_damage << ">의 데미지를 입었다!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (armor_damage_reduction >= amount)
        amount = 0;
    else
        amount -= armor_damage_reduction;
    std::cout << "> \"세상에, 기름 샌다! 새고 있는 것 같아! 아ㅏㅏ, 내가 새고 있어! 온사방이 기름 천지야!\" "
              << type << "<" << name << ">(이)가 <" << amount << ">만큼 공격받았다!" << std::endl;

    if (hit_points <= amount)
        hit_points = 0;
    else
        hit_points -= amount;
    std::cout << "[ "
              << type << "<" << name << "> | HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "> \"새 것 처럼 좋아진 기분인데. 나 아직도 새고있어?\" "
              << type << "<" << name << ">(이)가 HP와 EP를 <" << amount << ">만큼 회복했다!" << std::endl;

    hit_points += amount;
    energy_points += amount;
    if (max_hit_points < hit_points)
        hit_points = max_hit_points;
    if (max_energy_points < energy_points)
        energy_points = max_energy_points;

    std::cout << "[ "
              << type << "<" << name << "> | HP: " << hit_points << " | EP: " << energy_points << " ]" << std::endl;
}
