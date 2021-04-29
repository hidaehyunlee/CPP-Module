/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:44 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 16:02:40 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : name_("default"), grade_(150) {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name_(other.name_), grade_(other.grade_) {}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name), grade_(grade)
{
	if (grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	grade_ = other.grade_;
	return *this;
}

const std::string Bureaucrat::getName(void) const
{
	return name_;
}

int Bureaucrat::getGrade(void) const
{
	return grade_;
}

void Bureaucrat::increaseGrade(void)
{
	grade_--;
	if (grade_ < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decreaseGrade(void)
{
	grade_++;
	if (grade_ > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "GradeTooHighException : Grade too height!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "GradeTooLowException : Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << "<" << bureaucrat.getName() << ">, bureaucrat grade <" << bureaucrat.getGrade()  << ">";
	return os;
}
