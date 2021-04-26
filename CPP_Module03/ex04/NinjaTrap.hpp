/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:29:10 by daelee            #+#    #+#             */
/*   Updated: 2021/04/26 21:53:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
	NinjaTrap(void);
	NinjaTrap(const NinjaTrap& ninja_trap);
	NinjaTrap(const std::string& name);
	~NinjaTrap();

	NinjaTrap&	operator=(const NinjaTrap& ninja_trap);

	void		ninjaShoebox(ClapTrap& target);
	void		ninjaShoebox(FragTrap& target);
	void		ninjaShoebox(ScavTrap& target);
	void		ninjaShoebox(NinjaTrap& target);
};

#endif