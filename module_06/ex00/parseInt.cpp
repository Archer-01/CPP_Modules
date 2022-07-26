/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseInt.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:52:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 15:53:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.hpp"

bool	Parsing::parseInt(std::string const &str)
{
	if (str.front() == '-' || str.front() == '+')
	{
		return (Parsing::parseUnsignedInt(str.substr(1)));
	}
	else
	{
		return (Parsing::parseUnsignedInt(str));
	}
}
