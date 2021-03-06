/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daelee <daelee@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/29 18:24:32 by daelee            #+#    #+#             */
/*   Updated: 2021/04/29 21:44:11 by daelee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("shrubbery_creation", 145, 137)
{
	target_ = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : Form(other)
{
	target_ = other.target_;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("shrubbery_creation", 145, 137)
{
	target_ = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	Form::operator=(other);
	target_ = other.target_;
	return *this;
}

void ShrubberyCreationForm::action(void) const
{
	std::ofstream out(target_ + "_shrubbery");
	
	out << "         |              " << std::endl;         
	out << "        /|\\            " << std::endl;                         
	out << "       /*|O\\           " << std::endl;         
	out << "      /*/|\\*\\         " << std::endl; 
	out << "     /X/O|*\\X\\        " << std::endl; 
	out << "    /*/X/|\\X\\*\\      " << std::endl; 
	out << "   /O/*/X|*\\O\\X\\     " << std::endl;            
	out << "  /*/O/X/|\\X\\O\\*\\   " << std::endl; 
	out << " /X/O/*/X|O\\X\\*\\O\\  " << std::endl; 
	out << "/O/X/*/O/|\\X\\*\\O\\X\\" << std::endl; 
	out << "        |X|             " << std::endl; 
	out << "        |X|             " << std::endl;   

	out.close();
}
