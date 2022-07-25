/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:10:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/25 13:13:47 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

// * ShrubberyCreationForm Test
int	main(void)
{
	Bureaucrat				me("Me", 145);
	ShrubberyCreationForm	shrub("Shrub");

	try
	{
		shrub.beSigned(me);
		me.signForm(shrub);
		me.executeForm(shrub);
	}
	catch (std::exception const &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
		return (1);
	}
	std::cout << "Success!" << std::endl;
	return (0);
}

// * RobotomyRequestForm Test
// int	main(void)
// {
// 	Bureaucrat			me("me", 72);
// 	RobotomyRequestForm	robotomyRequestForm("robotomy");

// 	try
// 	{
// 		robotomyRequestForm.beSigned(me);
// 		me.signForm(robotomyRequestForm);
// 		me.executeForm(robotomyRequestForm);
// 	}
// 	catch(std::exception const &exception)
// 	{
// 		std::cerr << "Error: " << exception.what() << std::endl;
// 		return (1);
// 	}
// 	std::cout << "Success!" << std::endl;
// 	return (0);
// }

// * PresidentialPardonForm Test
// int	main(void)
// {
// 	Bureaucrat				me("me", 25);
// 	PresidentialPardonForm	form("presidential_pardon_target");

// 	try
// 	{
// 		form.beSigned(me);
// 		me.signForm(form);
// 		me.executeForm(form);
// 	}
// 	catch(std::exception const &exception)
// 	{
// 		std::cerr << "Error: " << exception.what() << std::endl;
// 		return (1);
// 	}
// 	return (0);
// }
