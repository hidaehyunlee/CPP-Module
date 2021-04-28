/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:28 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 16:21:36 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void) : name("empty"), title("empty")
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer& sorcerer)
{
    *this = sorcerer;
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
    std::cout << name << ", " << title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer&   Sorcerer::operator=(const Sorcerer& sorcerer)
{
    name = sorcerer.name;
    title = sorcerer.title;

    return *this;
}

std::string Sorcerer::getName(void) const
{
    return name;
}

std::string Sorcerer::getTitle(void) const
{
    return title;
}

void Sorcerer::polymorph(const Victim& victim) const
{
    victim.getPolymorphed();
}

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer)
{
    os << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like pones!" << std::endl;
    return os;
}