/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:53 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 21:41:14 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	ShrubberyCreationForm sc("home"); // sign(145), exec(137)
	Bureaucrat A("A", 100); 
	A.signForm(sc);
	A.executeForm(sc);

	std::cout << std::endl;
	
	RobotomyRequestForm rr("dog"); // sign(72), exec(45)
	Bureaucrat B("B", 60);
	B.signForm(rr);
	B.executeForm(rr);

	std::cout << std::endl;
	
	PresidentialPardonForm pp("trump");	// sign(25), exec(5)
	Bureaucrat C("C", 40);
	C.signForm(pp);
	C.executeForm(pp);

	return 0;
}