/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:27:49 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 19:32:54 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num)
{
    srand(time(NULL));

    size_ = num;
    std::string type_list[3] = {"Human", "Cat", "Yorkie"};
    zombie_list_ = new Zombie *[size_];

    for (int i = 0; i < size_; i++)
    {
        int random_num;
        std::string name;
        std::string type;

        random_num = rand() % 100;
        name = "Zombie_" + std::to_string(random_num);
        type = type_list[rand() % 3];
        
        zombie_list_[i] = new Zombie(name, type);
    }
}

ZombieHorde::~ZombieHorde()
{
    for (int i = 0; i < size_; i++)
    {
        delete zombie_list_[i];
    }
    delete[] zombie_list_;
}

void ZombieHorde::announce(void) const
{
    for (int i = 0; i < size_; i++)
    {
        zombie_list_[i]->announce();
    }
}