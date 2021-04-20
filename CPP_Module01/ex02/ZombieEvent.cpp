/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:32 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 16:59:53 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) { srand(time(NULL)); }

void ZombieEvent::setZombieType(const std::string type) { type_ = type; }

Zombie *ZombieEvent::newZombie(const std::string name) const
{
    Zombie *new_zombie = new Zombie(name, type_);
    return (new_zombie);
}

void ZombieEvent::randomChump(void) const
{
    std::string name;
    int random_num;
   
    random_num = rand() % 100;
    name = "Zombie_" + std::to_string(random_num);

    Zombie random_zombie(name, "Stack");
    random_zombie.announce();
}
