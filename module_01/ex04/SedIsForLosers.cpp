/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:21:49 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 13:32:50 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

SedIsForLosers::SedIsForLosers(const std::string filename)
{
	this->_src.open(filename);
	if (this->_src.is_open() == false)
	{
		std::cerr << "Error opening file: " << filename << std::endl;
		exit(EXIT_FAILURE);
	}
	this->_dest.open(filename + ".replace");
	if (this->_dest.is_open() == false)
	{
		std::cerr << "Error opening file: " << filename + ".replace";
		std::cerr << std::endl;
		this->_src.close();
		exit(EXIT_FAILURE);
	}
	return ;
}

SedIsForLosers::~SedIsForLosers(void)
{
	this->_src.close();
	this->_dest.close();
}
