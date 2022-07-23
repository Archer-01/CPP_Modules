/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:30:43 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 13:34:35 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"

Brain::Brain(void)
{
	bzero(this->_ideas, sizeof(std::string) * 100);
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &src)
{
	for (short i = 0; i < 100; ++i)
	{
		this->_ideas[i] = src._ideas[i];
	}
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	for (short i = 0; i < 100; ++i)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}
