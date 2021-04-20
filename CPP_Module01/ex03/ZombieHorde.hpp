/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 17:27:47 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 19:16:38 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieHorde
{
private:
    int size_;
    Zombie **zombie_list_;

public:
    ZombieHorde(int num);
    ~ZombieHorde();

    void announce(void) const;
};

#endif