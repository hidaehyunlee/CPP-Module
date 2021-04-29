/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:53:26 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 23:07:29 by daelee           ###   ########.fr       */
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
	typedef Form *(Intern::*t_form_maker)(std::string target) const;

	std::string formNames[3] = {"shrubbery_creation", "robotomy_request", "presidential_pardon"};
	t_form_maker formMakers[3] = {&Intern::makeShrubberyCreationForm, &Intern::makeRobotomyRequestForm, &Intern::makePresidentialPardonForm};

	for (int i = 0; i < 3; i++)
	{
		if (formName == formNames[i])
		{
			Form *newForm = (this->*(formMakers[i]))(target);
			std::cout << "Intern creates <" << newForm->getName() << ">" << std::endl;
			return newForm;
		}
	}
	throw InvalidFormNameException();
}

Form *Intern::makeShrubberyCreationForm(const std::string target) const
{
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(const std::string target) const
{
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(const std::string target) const
{
	return new PresidentialPardonForm(target);
}

const char* Intern::InvalidFormNameException::what() const throw()
{
	return "InvalidFormNameException : There is no matched form name!!";
}
