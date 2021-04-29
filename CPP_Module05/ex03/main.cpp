/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:53 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 23:13:15 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat daelee("daelee", 1);
		Intern intern;
		Form *form;

		form = intern.makeForm("shrubbery_creation", "home");
		daelee.signForm(*form);
		daelee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("robotomy_request", "cat");
		daelee.signForm(*form);
		daelee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("presidential_pardon", "trump");
		daelee.signForm(*form);
		daelee.executeForm(*form);
		delete form;

		std::cout << std::endl;

		form = intern.makeForm("no_name", "test");
		daelee.signForm(*form);
		daelee.executeForm(*form);
		delete form;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}