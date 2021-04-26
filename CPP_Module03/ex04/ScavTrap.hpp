/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 23:31:48 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 16:46:09 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(const ScavTrap &scav_trap);
    ScavTrap(const std::string &name);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &scav_trap);

    void challengeNewcomer(void);
};

#endif