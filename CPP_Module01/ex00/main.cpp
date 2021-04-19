/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 17:26:01 by daelee            #+#    #+#             */
/*   Updated: 2021/04/19 18:18:11 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap()
{
    Pony *heapPony = new Pony("HEAP");
    
    heapPony->setNum("First");
    std::cout << heapPony->getNum() << " Pony is on heap memory." << std::endl;
    
    delete heapPony;
}

void ponyOnTheStack()
{
    Pony stackPony("STACK");

    stackPony.setNum("Second");
    std::cout << stackPony.getNum() << " Pony is on stack memory." << std::endl;
}

int main(void)
{
    ponyOnTheHeap();
    std::cout << std::endl;
    ponyOnTheStack();
    return (0);
}