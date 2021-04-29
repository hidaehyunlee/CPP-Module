/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:24:11 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 18:37:05 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("robotomy_request", 72, 45)
{
	srand(time(NULL));

	target_ = "default";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : Form(other)
{
	srand(time(NULL));

	target_ = other.target_;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("robotomy_request", 72, 45)
{
	srand(time(NULL));

	target_ = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	Form::operator=(other);
	target_ = other.target_;
	return *this;
}

void RobotomyRequestForm::action(void) const
{
	std::cout << "> \"Drrrrrrr....\"" << std::endl;

	if (rand() % 2)
	{
		std::cout << "> " << "We Successfully robotomized " << target_ << " !!" << std::endl;
	}
	else
	{
		std::cout << "> " << "We failed to robotomize " << target_ << " !!" << std::endl;
	}
}
