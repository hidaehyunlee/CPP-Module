/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 22:31:23 by daelee            #+#    #+#             */
/*   Updated: 2021/05/05 09:43:05 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

template <typename T>
void print(T begin, T end) {
  while (begin != end) {
    std::cout << "[" << *begin << "] ";
    begin++;
  }
  std::cout << std::endl;
}

int main(void)
{
	std::vector<int> vec;

	for (int i = 0; i < 10; i++)
	{
		vec.push_back(i);
	}

	print(vec.begin(), vec.end());

	try
	{
		easyfind(vec, 4);
		std::cout << "Found!!" << std::endl;
		easyfind(vec, 8);
		std::cout << "Found!!" << std::endl;
		easyfind(vec, 12);
		std::cout << "Found!!" << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "Exception : " << e.what() << std::endl;
	}
	
	return 0;
}