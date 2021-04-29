/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:53 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 16:39:14 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

int main(void)
{
	std::cout << "==== Test 1 ====" << std::endl;
	try
	{
		Bureaucrat daelee("daelee", 1);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "==== Test 2 ====" << std::endl;
	try
	{
		Bureaucrat daelee("daelee", 1);
		std::cout << daelee << std::endl;
		
		std::cout << "> Increase grade of <daelee>" << std::endl;
		daelee.increaseGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "==== Test 3 ====" << std::endl;
	try
	{
		Bureaucrat daelee("daelee", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}
