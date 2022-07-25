/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 13:25:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 14:29:42 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include <string>
# include <iostream>
# include <stdexcept>

# define FORM_TYPES_COUNT 3

class Intern
{
	private:
		class NonexistingFormTypeException : public std::runtime_error
		{
			public:
				NonexistingFormTypeException(void);
		};

		static std::string const	_formNames[FORM_TYPES_COUNT];

	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern	&operator=(Intern const &rhs);
		Form	*makeForm(std::string const &formName, \
			std::string const &target);
};

#endif