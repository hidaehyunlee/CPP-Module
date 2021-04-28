/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:32 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 16:12:57 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include <string>
#include "Victim.hpp"

class Sorcerer
{
private:
    std::string name;
    std::string title;

    Sorcerer(void);

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer& sorcerer);
    ~Sorcerer();

    Sorcerer& operator=(const Sorcerer& sorcerer);

    std::string getName(void) const;
    std::string getTitle(void) const;

    void polymorph(const Victim& victim) const;
};

std::ostream& operator<<(std::ostream& os, const Sorcerer& sorcerer);

#endif
