/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:17 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 17:25:04 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) : Victim()
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon& peon) : Victim(peon)
{
    std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=(const Peon& peon)
{
    name = peon.name;
    return *this;
}

void Peon::getPolymorphed(void) const
{
    std::cout << name << " has been turned into a pink pony!" << std::endl;
}