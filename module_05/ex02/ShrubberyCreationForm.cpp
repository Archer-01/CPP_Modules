/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 08:28:51 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 10:59:53 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::FormNotSignedexception::FormNotSignedexception(void) :
	std::runtime_error("Form not signed")
{
	// Empty body
}

ShrubberyCreationForm::ShrubberyCreationForm(void) :
	Form("ShrubberyCreationForm", 145, 137),
	_target("shrubbery_target")
{
	// Empty body
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) :
	Form(src),
	_target(src._target)
{
	// Empty body
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	// Empty body
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	// Empty body
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=( \
	ShrubberyCreationForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::ofstream	file;

	if (this->getIsSigned() == false)
	{
		throw ShrubberyCreationForm::FormNotSignedexception();
	}
	this->checkGradeToExecute(executor);
	file.open(this->_target + "_shrubbery");
	if (file.is_open() == false)
	{
		std::cerr << "Error: cannot open file " << this->_target << std::endl;
		return ;
	}
	file << "               ,ooooooo," << std::endl;
	file << "       ,,,.   ,oooooo/oo,  .ooooooo." << std::endl;
	file << "    ,&%%&%&&%,ooooo/oooooo,oooo\\oo/oo" << std::endl;
	file << "   ,%&\\%&&%&&%,ooo\\ooo/ooooo\\ooo0-/oo'" << std::endl;
	file << "   %&&%&%&/%&&%oo\\oo/ /oooooooo\\ooooo'" << std::endl;
	file << "   %&&%/ %&%%oooo\\ V /oo' `oo\\o `/oo'" << std::endl;
	file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	file << "       |o|        | |         | |" << std::endl;
	file << "       |.|        | |         | |" << std::endl;
	file << "jgs \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_";
	file.close();
	return ;
}
