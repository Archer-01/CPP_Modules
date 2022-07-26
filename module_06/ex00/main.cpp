/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:06:53 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 20:21:04 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Convert.hpp"

static void	convert(std::string const &literal)
{
	switch(Convert::getType(literal))
	{
		case (Convert::CHAR_TYPE):
		{
			Convert::convertChar(literal);
			break;
		}
		case (Convert::FLOAT_TYPE):
		{
			Convert::convertFloat(literal);
			break;
		}
		case (Convert::INT_TYPE):
		{
			Convert::convertInt(literal);
			break;
		}
		case (Convert::DOUBLE_TYPE):
		{
			Convert::convertDouble(literal);
			break;
		}
		default:
		{
			std::cout << "UNKNOWN" << std::endl;
			break;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./convert <char|int|float|double>" << std::endl;
		return (1);
	}
	try
	{
		convert(argv[1]);
	}
	catch (std::exception const &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
		return (1);
	}
	return (0);
}
