/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:06:53 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 18:56:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./convert <char|int|float|double>" << std::endl;
		return (1);
	}
	switch(Convert::getType(argv[1]))
	{
		case (Convert::CHAR_TYPE):
		{
			Convert::convertChar(argv[1]);
			break;
		}
		case (Convert::FLOAT_TYPE):
		{
			std::cout << "FLOAT" << std::endl;
			break;
		}
		case (Convert::INT_TYPE):
		{
			Convert::convertInt(argv[1]);
			break;
		}
		case (Convert::DOUBLE_TYPE):
		{
			std::cout << "DOUBLE" << std::endl;
			break;
		}
		default:
		{
			std::cout << "UNKNOWN" << std::endl;
			break;
		}
	}
	return (0);
}
