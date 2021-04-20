/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 19:46:02 by daelee            #+#    #+#             */
/*   Updated: 2021/04/20 19:52:21 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr = &str;
    std::string &ref = str;

    std::cout << "A string          : " << str << std::endl;
    std::cout << "Using a pointer   : " << *ptr << std::endl;
    std::cout << "Using a reference : " << ref << std::endl;

    return (0);
}