/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:11:42 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 20:28:36 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Utils.hpp"

bool	Utils::isDigit(char c)
{
	return (c >= '0' && c <= '9');
}

bool	Utils::isPrintable(char c)
{
	return (c >= ' ' && c <= '~');
}

bool	Utils::isPrintable(int c)
{
	return (c >= 32 && c <= 126);
}
