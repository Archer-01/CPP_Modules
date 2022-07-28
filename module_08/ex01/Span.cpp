/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:40:31 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 11:55:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void) : _arr(std::vector<int>()), _max_size(0)
{
	// Empty body
}

Span::Span(unsigned int N) : _arr(std::vector<int>()), _max_size(N)
{
	// Empty body
}

Span::Span(Span const &src) : _arr(src._arr), _max_size(src._max_size)
{
	// Empty body
}

Span::~Span(void)
{
	// Empty body
}

Span	&Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		if (this->_max_size != rhs._max_size)
		{
			throw std::runtime_error("Invalid assignement");
		}
		this->_arr = rhs._arr;
	}
	return (*this);
}

void	Span::addNumber(int num)
{
	if (this->_arr.size() == this->_max_size)
	{
		throw std::runtime_error("Span is full");
	}
	else
	{
		this->_arr.push_back(num);
		return ;
	}
}
