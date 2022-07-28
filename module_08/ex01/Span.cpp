/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:40:31 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 13:26:56 by hhamza           ###   ########.fr       */
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

int	Span::shortestSpan(void) const
{
	std::vector<int>					sorted;
	std::vector<int>					spans(this->_arr.size() - 1);
	std::vector<int>::const_iterator	it;

	if (this->_arr.size() < 2)
	{
		throw std::runtime_error("Span has less than two elements");
	}
	sorted = this->_arr;
	std::sort(sorted.begin(), sorted.end());
	for (size_t i = 0; i < spans.size(); ++i)
	{
		spans[i] = sorted[i + 1] - sorted[i];
	}
	it = std::min_element(spans.begin(), spans.end());
	return (*it);
}

int	Span::longestSpan(void) const
{
	std::vector<int>::const_iterator	max_it;
	std::vector<int>::const_iterator	min_it;

	if (this->_arr.size() < 2)
	{
		throw std::runtime_error("Span has less than two elements");
	}
	max_it = std::max_element(this->_arr.begin(), this->_arr.end());
	min_it = std::min_element(this->_arr.begin(), this->_arr.end());
	return (*max_it - *min_it);
}
