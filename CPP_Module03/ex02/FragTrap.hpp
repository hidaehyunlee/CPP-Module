/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 13:13:32 by daelee            #+#    #+#             */
/*   Updated: 2021/04/25 14:04:22 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(const FragTrap& frag_trap);
	FragTrap(const std::string& name);
	~FragTrap();

	FragTrap&	operator=(const FragTrap& frag_trap);

	void		vaulthunter_dot_exe(std::string const & target);
};

#endif