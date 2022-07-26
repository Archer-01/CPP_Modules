/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseUnsignedInt.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:51:02 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 16:45:24 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.hpp"

bool	Parsing::parseUnsignedInt(std::string const &str)
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
