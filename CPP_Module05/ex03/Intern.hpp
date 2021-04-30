/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 21:53:21 by daelee            #+#    #+#             */
/*   Updated: 2021/04/30 09:53:19 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(const Intern& other);
	~Intern();

	Intern& operator=(const Intern& other);

	Form* makeForm(const std::string formName, const std::string target) const;

	class InvalidFormNameException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
};

#endif
