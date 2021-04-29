/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:53 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 17:51:59 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

	Bureaucrat daelee("daelee", 42);

	Form secretForm("secretForm", 10, 10);
	std::cout << secretForm << std::endl;
	
	Form nomalForm("nomalForm", 120, 120);
	std::cout << nomalForm << std::endl;

	std::cout << std::endl;

	daelee.signForm(secretForm);
	daelee.signForm(nomalForm);

	std::cout << std::endl;

	std::cout << secretForm << std::endl;
	std::cout << nomalForm << std::endl;

	return 0;
}
