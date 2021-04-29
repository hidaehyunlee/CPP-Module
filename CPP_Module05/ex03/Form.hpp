/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 17:16:43 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 23:15:02 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string name_;
	bool isSigned_;
	const int signGrade_;
	const int executeGrade_;

public:
	Form(void);
	Form(const Form& other);
	Form(std::string name, int signGrade, int executeGrade);
	virtual ~Form();

	Form& operator=(const Form& other);

	std::string getName(void) const;
	bool		getIsSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecuteGrade(void) const;
	void		beSigned(const Bureaucrat& bureaucrat);

	virtual void execute(Bureaucrat const &executor) const; // action 실행
	virtual void action(void) const = 0; // 순수 가상함수

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os , const Form& form);

#endif
