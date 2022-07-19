/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:29:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/19 12:16:34y hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_fraction_bits_count = 8;

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed) : _value(fixed._value)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const value) : _value(value << Fixed::_fraction_bits_count)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

/**
 * @brief Round fixed point number
 *
 * @param fixed_float: Initially calculated number in Fixed Point representation
 */
void	Fixed::round(float fixed_float)
{
	if (fixed_float - this->_value > 0.5f)
	{
		++(this->_value);
	}
	return ;
}

Fixed::Fixed(float const value)
{
	float		fixed_float;

	std::cout << "Float constructor called" << std::endl;
	fixed_float = value * (1 << Fixed::_fraction_bits_count);
	this->_value = static_cast<int>(fixed_float);
	this->round(fixed_float);
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->_value = fixed._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat(void) const
{
	float	fl;

	fl = static_cast<float>(this->_value) / (1 << Fixed::_fraction_bits_count);
	return (fl);
}

int	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_fraction_bits_count);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}
