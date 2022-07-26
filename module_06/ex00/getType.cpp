/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   getType.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:00:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 18:38:45 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::t_types	Convert::getType(std::string const &literal)
{
	if (literal.empty() == true)
	{
		return (Convert::UNKNOWN_TYPE);
	}
	else if (Parsing::parseChar(literal) == true)
	{
		return (Convert::CHAR_TYPE);
	}
	else if (Parsing::parseInt(literal) == true)
	{
		return (Convert::INT_TYPE);
	}
	else if (Parsing::parseFloat(literal))
	{
		return (Convert::FLOAT_TYPE);
	}
	else if (Parsing::parseDouble(literal))
	{
		return (Convert::DOUBLE_TYPE);
	}
	else
	{
		return (Convert::UNKNOWN_TYPE);
	}
}
