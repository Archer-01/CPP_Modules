/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:43:27 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 12:00:21 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) :
	Form("Presidential Pardon Form", 25, 5),
	_target("presidential_pardon_target")
{
	// Empty body
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("Presidential Pardon Form", 25, 5),
	_target(target)
{
	// Empty body
}

PresidentialPardonForm::PresidentialPardonForm( \
	PresidentialPardonForm const &src) :
		Form("Presidential Pardon Form", 25, 5),
		_target(src._target)
{
	// Empty body
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	// Empty body
}

PresidentialPardonForm	&PresidentialPardonForm::operator=( \
	PresidentialPardonForm const &rhs)
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkGradeToExecute(executor);
	std::cout << executor.getName();
	std::cout  << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}
