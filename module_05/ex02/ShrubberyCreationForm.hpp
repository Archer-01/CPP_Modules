/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 07:28:25 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 11:08:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <string>
# include <fstream>
# include <stdexcept>

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm(std::string const &target);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &rhs);
		void					execute(Bureaucrat const &executor) const;
};

#endif