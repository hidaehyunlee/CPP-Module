/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:16:39 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 17:52:22 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : name_("default"), isSigned_(false), signGrade_(150), executeGrade_(150) {}

Form::Form(const Form& other) : name_(other.name_), isSigned_(false), signGrade_(other.signGrade_), executeGrade_(other.executeGrade_) {}

Form::Form(std::string name, int signGrade, int executeGrade) : name_(name), isSigned_(false), signGrade_(signGrade), executeGrade_(executeGrade)
{
	if (signGrade_ < 1 || executeGrade_ < 1)
		throw Form::GradeTooHighException();
	if (signGrade_ > 150 || executeGrade_ > 150)
		throw Form::GradeTooLowException();
}

Form::~Form() {}

Form& Form::operator=(const Form& other)
{
	isSigned_ = other.isSigned_;
	return *this;
}

std::string Form::getName(void) const
{
	return name_;
}

bool		Form::getIsSigned(void) const
{
	return isSigned_;
}

int			Form::getSignGrade(void) const
{
	return signGrade_;
}

int			Form::getExecuteGrade(void) const
{
	return executeGrade_;
}

void		Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > signGrade_)
		throw Form::GradeTooLowException();

	isSigned_ = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException : Grade too height!";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException : Grade too low!";
}

std::ostream& operator<<(std::ostream& os , const Form& form)
{
	os << "Form<" << form.getName() << "> :  isSigned(" << form.getIsSigned() << "), signGrade(" << form.getSignGrade() << "), executeGrade(" << form.getExecuteGrade() << ")";
	return os;
}
