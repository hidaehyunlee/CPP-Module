/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 16:32:07 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 16:50:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPER_TRAP_HPP
# define SUPER_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : virtual public FragTrap, virtual public NinjaTrap
{
public:
	SuperTrap(void);
	SuperTrap(const SuperTrap& super_trap);
	SuperTrap(const std::string& name);
	~SuperTrap();

	SuperTrap&	operator=(const SuperTrap& super_trap);

	void		rangedAttack(std::string const & target);
	void		meleeAttack(std::string const & target);
};

#endif