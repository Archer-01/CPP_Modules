/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertDouble.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:52:52 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 20:42:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	displayChar(double num)
{
	int	int_part;

	std::cout << "char: ";
	int_part = static_cast<int>(num);
	if (num - int_part == 0)
	{
		if (Utils::isPrintable(static_cast<char>(int_part)) == true)
		{
			std::cout << "'" << static_cast<char>(int_part) << "'";
		}
	}
	else
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
	return ;
}

static void	displayInt(double num)
{
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	return ;
}

static void	displayFloat(double num)
{
	std::cout << "float: ";
	if (num - static_cast<int>(num) == 0)
	{
		std::cout << static_cast<int>(num) << ".0f";
	}
	else
	{
		std::cout << num << "f";
	}
	std::cout << std::endl;
	return ;
}

static void	displayDouble(double num)
{
	std::cout << "double: ";
	if (num - static_cast<int>(num) == 0)
	{
		std::cout << static_cast<int>(num) << ".0";
	}
	else
	{
		std::cout << num;
	}
	std::cout << std::endl;
	return ;
}

void	Convert::convertDouble(std::string const &literal)
{
	double	num;

	if (literal == "+inf" || literal == "-inf" || literal == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << "f" << std::endl;
		std::cout << "double: " << literal << std::endl;
		return ;
	}
	num = std::stod(literal);
	displayChar(num);
	displayInt(num);
	displayFloat(num);
	displayDouble(num);
	return ;
}
