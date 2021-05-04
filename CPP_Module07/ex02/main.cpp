/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:15:49 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 18:53:15 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

int main(void)
{
	Array<int> intArr(10);

	for(int i = 0; i < 10; i++)
		std::cout << intArr[i] << " ";

	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
		intArr[i] = i + 1;

	for(int i = 0; i < 10; i++)
		std::cout << intArr[i] << " ";
	
	std::cout << std::endl;

	try
	{
		std::cout << intArr[20] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	const Array<float> floatArr(5);

	for (float i = 0; i < 5; i++)
	{
		std::cout << floatArr[i] << " ";
	}
	std::cout << std::endl;
	
	return 0;
}
