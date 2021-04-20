/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:34 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 16:52:05 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <iostream>
#include <string>
#include <time.h>
#include "Zombie.hpp"

class ZombieEvent
{
private:
    std::string type_;

public:
    ZombieEvent(void);
    void setZombieType(const std::string type);
    Zombie *newZombie(const std::string name) const;
    void randomChump(void) const;
};

#endif