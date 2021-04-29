/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:24:03 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 19:01:26 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidential_pardon", 25, 5)
{
	target_ = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) : Form(other)
{
	target_ = other.target_;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : Form("presidential_pardon", 25, 5)
{
	target_ = target;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	Form::operator=(other);
	target_ = other.target_;
	return *this;
}

void PresidentialPardonForm::action(void) const
{
	std::cout << "<" << target_ << "> has been pardoned by Zafod Beeblebrox." << std::endl;
}
