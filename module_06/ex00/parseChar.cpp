/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parseChar.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:49:20 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 16:13:21 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Parsing.hpp"

bool	Parsing::parseChar(std::string const &str)
{
	std::numeric_limits<char>::min();
	return (str.length() == 1 && Utils::isDigit(str.front()) == false);
}
