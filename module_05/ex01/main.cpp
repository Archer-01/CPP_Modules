/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 20:10:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 20:19:03 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try
	{
		Bureaucrat	me("me", 1);

		me.decrementGrade();
		std::cout << me << std::endl;
		me.incrementGrade();
	}
	catch (std::exception const &exception)
	{
		std::cout << "Error: " << exception.what() << std::endl;
		return (1);
	}
	std::cout << "Success" << std::endl;
	return (0);
}
