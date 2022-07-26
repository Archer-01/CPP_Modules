/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:06:53 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 15:34:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "convert.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./convert <char|int|float|double>" << std::endl;
		return (1);
	}
	switch(getType(argv[1]))
	{
		case (CHAR_TYPE):
		{
			std::cout << "CHAR" << std::endl;
			break;
		}
		case (FLOAT_TYPE):
		{
			std::cout << "FLOAT" << std::endl;
			break;
		}
		case (INT_TYPE):
		{
			std::cout << "INT" << std::endl;
			break;
		}
		case (DOUBLE_TYPE):
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
