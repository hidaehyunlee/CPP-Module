/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:53:26 by daelee            #+#    #+#             */
/*   Updated: 2021/04/30 09:57:32 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) {}

Intern::Intern(const Intern& other)
{
	(void)other;
}
Intern::~Intern() {}

Intern& Intern::operator=(const Intern& other)
{
	(void)other;
	return *this;
}

Form *Intern::makeForm(const std::string formName, const std::string target) const
{
	std::string targets[3] = {"shrubbery_creation", "robotomy_request", "presidential_pardon"};

	Form *forms[3];
	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);

	Form *result = 0;
	for (int i = 0; i < 3; i++)
	{
		if (formName == targets[i])
		{
			std::cout << "Intern creates " << formName << " form." << '\n';
			result = forms[i];
			continue;
		}
		delete forms[i];
	}
	if (result)
		return (result);
	else
		throw Intern::InvalidFormNameException();
}

const char* Intern::InvalidFormNameException::what() const throw()
{
	return "InvalidFormNameException : There is no matched form name!!";
}
