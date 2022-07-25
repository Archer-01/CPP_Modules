/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:12:59 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 11:32:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :
	Form("RobotomyRequestForm", 72, 45),
	_target("robotomy_target")
{
	// Empty body
}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 45),
	_target(target)
{
	// Empty body
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) :
	Form(src),
	_target(src._target)
{
	// Empty body
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	// Empty body
}

RobotomyRequestForm	&RobotomyRequestForm::operator=( \
	RobotomyRequestForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	bool	robotomySuccess;

	this->checkGradeToExecute(executor);
	std::cout << "* DRILLING NOISES *" << std::endl;
	srand(time(NULL));
	robotomySuccess = static_cast<bool>(rand() % 2);
	if (robotomySuccess == true)
	{
		std::cout << "Robotomy " << "\033[1;32m" << "success" << "\033[0m";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Robotomy " << "\033[1;31m" << "failed" << "\033[0m";
		std::cout << std::endl;
	}
	return ;
}
