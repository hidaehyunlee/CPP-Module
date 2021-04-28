/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 03:02:56 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 03:51:06 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(const Cure& otehr) : AMateria(otehr) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& other)
{
	type = other.type;
	_xp = other._xp;
	
	return *this;
}

AMateria* Cure::clone(void) const
{
	AMateria* cure = new Cure;
	return cure;
}

void Cure::use(ICharacter& target)
{
	std::cout <<   "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
