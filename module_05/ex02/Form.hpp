/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:26:32 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 11:39:45 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <stdexcept>
# include <iostream>

class Bureaucrat;
# include "Bureaucrat.hpp"

class Form
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

		class FormNotSignedexception : public std::runtime_error
		{
			public:
				FormNotSignedexception(void);
		};

		std::string const	_name;
		bool				_isSigned;
		short const			_gradeToSign;
		short const			_gradeToExecute;

		Form(void);

	public:
		Form(Form const &src);
		Form(std::string const &name, short const gradeToSign, \
			short const gradeToExecute);
		virtual ~Form(void);
		Form				&operator=(Form const &rhs);
		std::string const	&getName(void) const;
		bool				getIsSigned(void) const;
		short				getGradeToSign(void) const;
		short				getGradeToExecute(void) const;
		void				beSigned(Bureaucrat const &bureaucrat);
		virtual void		execute(Bureaucrat const &executor) const = 0;
		void				checkGradeToExecute(Bureaucrat const &bureaucrat) \
			const;
};

std::ostream	&operator<<(std::ostream &out, Form const &rhs);

#endif