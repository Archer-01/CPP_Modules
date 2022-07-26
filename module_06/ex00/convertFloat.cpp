/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertFloat.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 19:00:07 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 19:18:09 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	displayChar(float num)
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

static void	displayInt(float num)
{
	std::cout << "int: " << static_cast<int>(num) << std::endl;
	return ;
}

static void	displayFloat(float num)
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

static void	displayDouble(float num)
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

void	Convert::convertFloat(std::string const &literal)
{
	float	num;

	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << literal.substr(0, literal.size() - 1);
		std::cout << std::endl;
		return ;
	}
	num = std::stof(literal);
	displayChar(num);
	displayInt(num);
	displayFloat(num);
	displayDouble(num);
	return ;
}
