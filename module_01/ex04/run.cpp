/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:32:32 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 13:32:53 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

void	SedIsForLosers::run(const std::string s1, const std::string s2)
{
	char	c;

	c = this->_src.get();
	while (this->_src.eof() == false)
	{
		if (c == s1[0])
		{
			std::string		buffer;
			int				i;

			buffer = "";
			i = 0;
			while (this->_src.eof() == false && s1[i] != '\0' && c == s1[i])
			{
				buffer += c;
				++i;
				c = this->_src.get();
			}
			if (s1[i] == '\0')
			{
				this->_dest << s2;
			}
			else if (c != s1[i])
			{
				this->_dest << buffer;
			}
			if (this->_src.eof() == false)
			{
				this->_dest << c;
			}
		}
		else
		{
			this->_dest << c;
		}
		c = this->_src.get();
	}
	return ;
}