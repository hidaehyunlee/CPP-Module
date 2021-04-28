/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 15:05:11 by daelee            #+#    #+#             */
/*   Updated: 2021/04/28 17:27:42 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main(void)
{
    {
        Sorcerer robert("Robert", "the Magnificent");
        
        Victim jim("Jimmy");
        Peon joe("Joe");
        
        std::cout << robert << jim << joe;
        
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    std::cout << std::endl;
    std::cout << "--------------- some more tests ---------------" << std::endl;
    std::cout << std::endl;
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");

        Victim *newjoe = &joe;

        robert.polymorph(joe);
        robert.polymorph(*newjoe);
    }
    return 0;
}