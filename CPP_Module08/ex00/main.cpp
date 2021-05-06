/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:31:23 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 13:00:42 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	std::vector<int>::iterator iter = begin(vec);

	while (iter != end(vec))
	{
		std::cout << *iter++ << " "; 
	}
	std::cout << std::endl;

	try
	{
		easyfind(vec, 4);
		std::cout << "easy find!" << std::endl;
		easyfind(vec, 8);
		std::cout << "easy find!" << std::endl;
		easyfind(vec, 12);
		std::cout << "easy find!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	
	return 0;
}