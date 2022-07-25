/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:08:24 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 06:55:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::GradeTooHighException::GradeTooHighException(void) :
	std::runtime_error("Grade too high")
{
	// Empty body
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) :
	std::runtime_error("Grade too low")
{
	// Empty body
}

Bureaucrat::Bureaucrat(void) : _name("Bureaucrat"), _grade(150)
{
	// Empty body
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) :
	_name(src._name),
	_grade(src._grade)
{
	// Empty body
}

Bureaucrat::Bureaucrat(std::string const &name, short grade) :
	_name(name),
	_grade(grade)
{
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException();
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::~Bureaucrat(void)
{
	// Empty body
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return (*this);
}

std::string const	&Bureaucrat::getName(void) const
{
	return (this->_name);
}

short	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(void)
{
	if (this->_grade > 1)
	{
		this->_grade--;
	}
	else
	{
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::decrementGrade(void)
{
	if (this->_grade < 150)
	{
		this->_grade++;
	}
	else
	{
		throw Bureaucrat::GradeTooLowException();
	}
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}

void	Bureaucrat::signForm(Form const &form)
{
	if (form.getIsSigned() == true)
	{
		std::cout << this->_name << " signed " << form.getName();
		std::cout << std::endl;
		return ;
	}
	else
	{
		std::cout << this->_name << " couldn't sign " << form.getName();
		std::cout << " because it is not signed." << std::endl;
		return ;
	}
}
