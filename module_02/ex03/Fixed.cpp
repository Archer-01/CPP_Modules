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
	// Empty body
}

Fixed::Fixed(Fixed const &fixed) : _value(fixed._value)
{
	// Empty body
}

Fixed::Fixed(int const value) : _value(value << Fixed::_fraction_bits_count)
{
	// Empty body
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

	fixed_float = value * (1 << Fixed::_fraction_bits_count);
	this->_value = static_cast<int>(fixed_float);
	this->round(fixed_float);
	return ;
}

Fixed::~Fixed(void)
{
	// Empty body
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	this->_value = fixed._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator==(Fixed const &fixed) const
{
	return (this->_value == fixed._value);
}

bool	Fixed::operator!=(Fixed const &fixed) const
{
	return (!(*this == fixed));
}

bool	Fixed::operator>(Fixed const &fixed) const
{
	return (this->_value > fixed._value);
}

bool	Fixed::operator<(Fixed const &fixed) const
{
	return (this->_value < fixed._value);
}

bool	Fixed::operator>=(Fixed const &fixed) const
{
	return (*this > fixed || *this == fixed);
}

bool	Fixed::operator<=(Fixed const &fixed) const
{
	return (*this < fixed || *this == fixed);
}

Fixed	Fixed::operator+(Fixed const &fixed) const
{
	Fixed	result(*this);

	result._value += fixed._value;
	return (result);
}

Fixed	Fixed::operator-(Fixed const &fixed) const
{
	Fixed	result(*this);

	result._value -= fixed._value;
	return (result);
}

Fixed	Fixed::operator*(Fixed const &fixed) const
{
	Fixed	result(this->toFloat() * fixed.toFloat());

	return (result);
}

Fixed	Fixed::operator/(Fixed const &fixed) const
{
	Fixed	result(*this);

	result._value /= fixed._value;
	return (result);
}

Fixed	&Fixed::operator++(void)
{
	++(this->_value);
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	result(*this);

	++(this->_value);
	return (result);
}

Fixed	&Fixed::operator--(void)
{
	--(this->_value);
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	result(*this);

	--(this->_value);
	return (result);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	return ((fixed1 < fixed2) ? fixed1 : fixed2);
}

Fixed	&Fixed::min(Fixed const &fixed1, Fixed const &fixed2)
{
	return ((fixed1 < fixed2) ? (Fixed&) fixed1 : (Fixed&) fixed2);
}

Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	return ((fixed1 > fixed2) ? fixed1 : fixed2);
}

Fixed	&Fixed::max(Fixed const &fixed1, Fixed const &fixed2)
{
	return ((fixed1 > fixed2) ? (Fixed&) fixed1 : (Fixed&) fixed2);
}
