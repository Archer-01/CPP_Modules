/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:10:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 14:42:20 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Intern		someRandomIntern;
	Form		*form;
	Bureaucrat	me("me", 1);

	try
	{
		form = someRandomIntern.makeForm("some random form", "home");
		form->beSigned(me);
		me.executeForm(*form);
		delete form;
	}
	catch (std::exception const &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
		return (1);
	}
	std::cout << "Success!" << std::endl;
	return (0);
}
