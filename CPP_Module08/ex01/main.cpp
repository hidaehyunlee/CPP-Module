/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 13:11:48 by daelee            #+#    #+#             */
/*   Updated: 2021/05/06 13:46:55 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "span.hpp"

int main(void)
{
    std::cout << "-------------- default test ----------------" << std::endl;
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "------------- execption test ---------------" << std::endl;
	Span sp2 = Span(3);

	try  // empty span 에러 테스트
	{
		std::cout << sp2.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		sp2.addNumber(10);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);
		std::cout << "addNumber success!!" << std::endl;
		sp2.addNumber(5);  // full span 에러 테스트
		std::cout << "addNumber success!!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;



	std::cout << "--------------- iterator test --------------" << std::endl;
	Span sp3 = Span(10000);

	std::vector<int> vec;
	for (int i = 0; i < 10000; i++)
	{
		vec.push_back(i + 1);
	}

	sp3.addNumber(vec.begin(), vec.end());

	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}