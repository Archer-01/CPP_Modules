/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:00:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 15:38:33 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

static bool	parseUnsignedInt(std::string const &str)
{
	if (str.empty() == true)
	{
		return (false);
	}
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (Utils::isDigit(str[i]) == false)
		{
			return (false);
		}
	}
	return (true);
}

static bool	parseInt(std::string const &str)
{
	if (str.front() == '-' || str.front() == '+')
	{
		return (parseUnsignedInt(str.substr(1)));
	}
	else
	{
		return (parseUnsignedInt(str));
	}
}

static bool	parseChar(std::string const &str)
{
	return (str.length() == 1 && Utils::isDigit(str.front()) == false);
}

static bool	parseDouble(std::string const &str)
{
	size_t	dot_index;

	if (str == "nan" || str == "+inf" || str == "-inf")
	{
		return (true);
	}
	if (str.front() == '.' || str.back() == '.')
	{
		return (false);
	}
	dot_index = str.find('.');
	if (dot_index == std::string::npos)
	{
		return (false);
	}
	if (parseInt(str.substr(0, dot_index)) == false)
	{
		return (false);
	}
	if (parseUnsignedInt(str.substr(dot_index + 1)) == false)
	{
		return (false);
	}
	return (true);
}

static bool	parseFloat(std::string const &str)
{
	std::string	substr;

	if (str.back() != 'f')
	{
		return (false);
	}
	substr = str.substr(0, str.length() - 1);
	if (substr == "nan" || substr == "+inf" || substr == "-inf")
	{
		return (true);
	}
	else
	{
		return (parseDouble(substr));
	}
}

t_types	getType(std::string const &literal)
{
	if (literal.empty() == true)
	{
		return (UNKNOWN_TYPE);
	}
	else if (parseChar(literal) == true)
	{
		return (CHAR_TYPE);
	}
	else if (parseInt(literal) == true)
	{
		return (INT_TYPE);
	}
	else if (parseFloat(literal))
	{
		return (FLOAT_TYPE);
	}
	else if (parseDouble(literal))
	{
		return (DOUBLE_TYPE);
	}
	else
	{
		return (UNKNOWN_TYPE);
	}
}
