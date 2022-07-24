/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:22:09 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 21:37:50by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::GradeTooHighException::GradeTooHighException(void) :
	std::runtime_error("Grade too high")
{
	// Empty body
}

Form::GradeTooLowException::GradeTooLowException(void) :
	std::runtime_error("Grade too low")
{
	// Empty body
}

Form::Form(void) :
	_name("Form"),
	_isSigned(false),
	_gradeToSign(150),
	_gradeToExecute(150)
{
	// Empty body
}

Form::Form(Form const &src) :
	_name(src._name),
	_isSigned(src._isSigned),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute)
{
	// Empty body
}

Form::Form(std::string const &name, short const gradeToSign, \
	short const getGradeToExecute) :
	_name(name),
	_isSigned(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(getGradeToExecute)
{
	if (gradeToSign < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (gradeToSign > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (getGradeToExecute < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (getGradeToExecute > 150)
	{
		throw Form::GradeTooLowException();
	}
}

Form::~Form(void)
{
	// Empty body
}

Form	&Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		this->_isSigned = rhs._isSigned;
	}
	return (*this);
}

std::string const	&Form::getName(void) const
{
	return (this->_name);
}

bool	Form::getIsSigned(void) const
{
	return (this->_isSigned);
}

short	Form::getGradeToSign(void) const
{
	return (this->_gradeToSign);
}

short	Form::getGradeToExecute(void) const
{
	return (this->_gradeToExecute);
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (bureaucrat.getGrade() > 150)
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		this->_isSigned = true;
		return ;
	}
}

std::ostream	&operator<<(std::ostream &out, Form const &rhs)
{
	out << rhs.getName() << "[";
	if (rhs.getIsSigned() == true)
	{
		out << "Signed";
	}
	else
	{
		out << "Not signed";
	}
	out << "] - Grade: " << rhs.getGradeToSign() << " / ";
	out << rhs.getGradeToExecute();
	return (out);
}
