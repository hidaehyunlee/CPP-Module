/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:15:20 by daelee            #+#    #+#             */
/*   Updated: 2021/05/04 17:28:10 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main(void)
{
	int arr1[] = {1, 2, 3, 4, 5};
	iter(arr1, 5, print);

	std::cout << std::endl;

	double arr3[] = {1.23, 45.67, 89, 3.141592};
	iter(arr3, 3, print);

	std::cout << std::endl;

	std::string arr2[] = {"42", "seoul", "daelee"};
	iter(arr2, 3, print);

	return 0;
}