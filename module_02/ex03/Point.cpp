/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:55:07 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/20 08:37:33 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// Empty body
}

Point::Point(Point const &point) : _x(Fixed(point._x)), _y(Fixed(point._y))
{
	// Empty body
}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y))
{
	// Empty body
}

Point::~Point(void)
{
	// Empty body
}

Point	&Point::operator=(Point const &point)
{
	(void) point;
	return (*this);
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}
