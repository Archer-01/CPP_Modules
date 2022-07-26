/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertChar.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 18:32:38 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 19:09:07 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

static void	displayChar(char c)
{
	std::cout << "char: ";
	if (Utils::isPrintable(c) == true)
	{
		std::cout << "'" << c << "'";
	}
	else
	{
		std::cout << "Non displayable";
	}
	std::cout << std::endl;
	return ;
}

static void	displayInt(char c)
{
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	return ;
}

static void	displayDouble(char c)
{
	std::cout << "double: " << static_cast<int>(c) << ".0" << std::endl;
	return ;
}

static void	displayFloat(char c)
{
	std::cout << "float: " << static_cast<int>(c) << ".0f" << std::endl;
	return ;
}

void	Convert::convertChar(std::string const &literal)
{
	char	c;

	c = literal.front();
	displayChar(c);
	displayInt(c);
	displayFloat(c);
	displayDouble(c);
	return ;
}
