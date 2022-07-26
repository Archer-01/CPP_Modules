/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:00:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 15:54:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

t_types	getType(std::string const &literal)
{
	if (literal.empty() == true)
	{
		return (UNKNOWN_TYPE);
	}
	else if (Parsing::parseChar(literal) == true)
	{
		return (CHAR_TYPE);
	}
	else if (Parsing::parseInt(literal) == true)
	{
		return (INT_TYPE);
	}
	else if (Parsing::parseFloat(literal))
	{
		return (FLOAT_TYPE);
	}
	else if (Parsing::parseDouble(literal))
	{
		return (DOUBLE_TYPE);
	}
	else
	{
		return (UNKNOWN_TYPE);
	}
}
