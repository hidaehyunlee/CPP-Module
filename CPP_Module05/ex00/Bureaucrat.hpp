/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 15:50:48 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 16:01:39 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
	const std::string	name_;
	int					grade_;

public:
	Bureaucrat(void);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat(const std::string name, int grade);
	~Bureaucrat();

	Bureaucrat& operator=(const Bureaucrat& other);

	const std::string getName(void) const;
	int getGrade(void) const;

	void increaseGrade(void);
	void decreaseGrade(void);

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
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);

#endif
