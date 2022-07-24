/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 19:00:09 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 21:44:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <stdexcept>
# include <iostream>

class Form;
# include "Form.hpp"

class Bureaucrat
{
	private:
		class GradeTooHighException : public std::runtime_error
		{
			public:
				GradeTooHighException(void);
		};

		class GradeTooLowException : public std::runtime_error
		{
			public:
				GradeTooLowException(void);
		};

		std::string const	_name;
		short				_grade;

		Bureaucrat(void);

	public:
		Bureaucrat(Bureaucrat const &src);
		Bureaucrat(std::string const &name, short grade);
		~Bureaucrat(void);
		Bureaucrat	&operator=(Bureaucrat const &rhs);
		std::string const	&getName(void) const;
		short				getGrade(void) const;
		void				incrementGrade(void);
		void				decrementGrade(void);
		void				signForm(Form const &form);
};

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif