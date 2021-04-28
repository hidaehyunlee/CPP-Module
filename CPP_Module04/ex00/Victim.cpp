/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:38 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 16:21:58 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(void) : name("empty")
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(std::string name) : name(name)
{
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim& victim)
{
    *this = victim;
    std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}
Victim::~Victim()
{
    std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator=(const Victim& victim)
{
    name = victim.name;
    return *this;
}

std::string Victim::getName(void) const
{
    return name;
}

void Victim::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Victim& victim)
{
    os << "I'm " << victim.getName() << " and I like otters!" << std::endl;
    return os;
}
