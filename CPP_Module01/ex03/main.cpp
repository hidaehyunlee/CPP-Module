/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:27:19 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 19:32:33 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ZombieHorde.hpp"

int main(void)
{
    std::cout << "\n7 Zombie is coming..." << std::endl;
    ZombieHorde *horde = new ZombieHorde(7);
    horde->announce();
    delete horde;

    std::cout << "\n3 Zombie is coming..." << std::endl;
    horde = new ZombieHorde(3);
    horde->announce();
    delete horde;

    return (0);
}