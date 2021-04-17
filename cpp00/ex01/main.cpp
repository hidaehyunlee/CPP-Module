/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 17:32:20 by daelee            #+#    #+#             */
/*   Updated: 2021/04/17 17:20:29 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"

void printAsciiHeader(void)
{
    std::cout << "  ____ ____ _________                           \n";
    std::cout << " ||M |||y |||       ||                          \n";
    std::cout << " ||__|||__|||_______||                          \n";
    std::cout << " |/__\\|/__\\|/_______\\|                          \n";
    std::cout << "  ____ ____ ____ ____ ____ ____ ____ _________  \n";
    std::cout << " ||A |||w |||e |||s |||o |||m |||e |||       || \n";
    std::cout << " ||__|||__|||__|||__|||__|||__|||__|||_______|| \n";
    std::cout << " |/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_______\\| \n";
    std::cout << "  ____ ____ ____ ____ ____ ____ ____ ____ ____  \n";
    std::cout << " ||P |||h |||o |||n |||e |||B |||o |||o |||k || \n";
    std::cout << " ||__|||__|||__|||__|||__|||__|||__|||__|||__|| \n";
    std::cout << " |/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\| ...by daelee \n";
}

int main(void)
{
    std::string cmd;
    phoneBook pb;

    printAsciiHeader();
    while (1)
    {
        std::cout << "Enter A Command [ ADD | SEARCH | EXIT ] : ";

        if (!(std::getline(std::cin, cmd)))
            exit(1);
        if (std::cin.eof())
            exit(1);
        if (cmd.compare("ADD") == 0)
            pb.add();
        else if (cmd.compare("SEARCH") == 0)
            pb.search();
        else if (cmd.compare("EXIT") == 0)
        {
            std::cout << "Good Bye!" << std::endl;
            break;
        }
        else
            std::cout << "Wrong Input!" << std::endl;
    }
    return (0);
}