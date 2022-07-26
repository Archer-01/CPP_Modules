/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseFloat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:54:13 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 15:54:38 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.hpp"

bool	Parsing::parseFloat(std::string const &str)
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
		return (Parsing::parseDouble(substr));
	}
}
