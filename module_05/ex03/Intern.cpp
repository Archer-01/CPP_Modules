/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:36:49 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 14:36:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::NonexistingFormTypeException::NonexistingFormTypeException(void) :
	std::runtime_error("Non existing form type")
{
	// Empty body
}

std::string	const	Intern::_formNames[FORM_TYPES_COUNT] = {
	"shrubbery creation",
	"robotomy request",
	"presidenial pardon"
};

Intern::Intern(void)
{
	// Empty body
}

Intern::Intern(Intern const &src)
{
	(void) src;
	return ;
}

Intern::~Intern(void)
{
	// Empty body
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string const &formName, \
	std::string const &target)
{
	int		i;

	for (i = 0; i < 3; ++i)
	{
		if (formName == Intern::_formNames[i])
		{
			break ;
		}
	}
	switch (i)
	{
		case (0):
		{
			return (new ShrubberyCreationForm(target));
		}
		case (1):
		{
			return (new RobotomyRequestForm(target));
		}
		case (2):
		{
			return (new PresidentialPardonForm(target));
		}
		default:
		{
			throw Intern::NonexistingFormTypeException();
		}
	}
}
