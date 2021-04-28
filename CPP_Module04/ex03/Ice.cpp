/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 03:03:10 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 03:51:12 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(const Ice& otehr) : AMateria(otehr) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& other)
{
	type = other.type;
	_xp = other._xp;

	return *this;
}

AMateria* Ice::clone(void) const
{
	AMateria* ice = new Ice;
	return ice;
}

void Ice::use(ICharacter& target)
{
	std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
