/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 12:24:30 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 17:02:45 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    std::cout << "...First Zombie..." << std::endl;
    Zombie zombie1("Zombie_Zulu", "Stack");
    zombie1.announce();

    std::cout << std::endl << "...Second Zombie..." << std::endl;
    ZombieEvent event;
    event.setZombieType("Heap");
    Zombie *zombie2 = event.newZombie("Zombie_Chorong");
    zombie2->announce();
    delete zombie2;

    std::cout << std::endl << "...Randome Zombies..." << std::endl;
    for (int i = 0; i < 10; i++)
    {
        event.randomChump();
    }
    return (0);
}