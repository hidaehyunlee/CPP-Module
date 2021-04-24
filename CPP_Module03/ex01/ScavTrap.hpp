/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 23:31:48 by daelee            #+#    #+#             */
/*   Updated: 2021/04/25 00:37:37 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>

class ScavTrap
{
private:
    unsigned int hit_points;
    unsigned int max_hit_points;
    unsigned int energy_points;
    unsigned int max_energy_points;
    unsigned int level;
    std::string name;
    unsigned int melee_attack_damage;
    unsigned int ranged_attack_damage;
    unsigned int armor_damage_reduction;

public:
    ScavTrap(void);
    ScavTrap(const ScavTrap &scav_trap);
    ScavTrap(const std::string &name);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &scav_trap);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void challengeNewcomer(std::string const &target);
};

#endif