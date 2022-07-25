/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:10:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 07:05:46 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int	main(void)
{
	Form		myForm("myForm", 42, 37);
	Bureaucrat	me("me", 44);

	try
	{
		myForm.beSigned(me);
	}
	catch (std::exception const &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
	}
	me.signForm(myForm);
	return (0);
}
