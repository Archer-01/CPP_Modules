/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseDouble.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:53:33 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 16:08:54 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.hpp"

bool	Parsing::parseDouble(std::string const &str)
{
	size_t	dot_index;

	if (str == "nan" || str == "+inf" || str == "-inf")
	{
		return (true);
	}
	if (str.front() == '.')
	{
		return (Parsing::parseUnsignedInt(str.substr(1)));
	}
	if ((str.front() == '+' || str.front() == '-') && str[1] == '.')
	{
		return (Parsing::parseUnsignedInt(str.substr(2)));
	}
	dot_index = str.find('.');
	if (dot_index == std::string::npos)
	{
		return (false);
	}
	if (Parsing::parseInt(str.substr(0, dot_index)) == false)
	{
		return (false);
	}
	return (Parsing::parseUnsignedInt(str.substr(dot_index + 1)));
}
