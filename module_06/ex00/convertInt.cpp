/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertInt.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:49:48 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 18:57:16 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	displayChar(int num)
{
	std::cout << "char: ";
	if (Utils::isPrintable(static_cast<char>(num)) == true)
	{
		std::cout << static_cast<char>(num);
	}
	else
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
	return ;
}

static void	displayInt(int num)
{
	std::cout << "int: " << num << std::endl;
	return ;
}

static void	displayFloat(float num)
{
	std::cout << "float: " << num << ".0f" << std::endl;
	return ;
}

static void	displayDouble(double num)
{
	std::cout << "double: " << num << ".0" << std::endl;
	return ;
}

void	Convert::convertInt(std::string const &literal)
{
	int	num;

	num = std::stoi(literal);
	displayChar(num);
	displayInt(num);
	displayFloat(num);
	displayDouble(num);
	return ;
}
