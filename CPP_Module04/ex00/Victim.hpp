/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:44 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 16:46:39 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
    std::string name;
    Victim(void);

public:
    Victim(std::string name);
    Victim(const Victim& victim);
    virtual ~Victim();

    Victim& operator=(const Victim& victim);

    std::string getName(void) const;
    virtual void getPolymorphed(void) const;
};

std::ostream& operator<<(std::ostream& os, const Victim& victim);

#endif
