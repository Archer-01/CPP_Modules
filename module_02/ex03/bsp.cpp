/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:10:02 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/20 10:18:38 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float	absf(float num)
{
	return (num < 0 ? -num : num);
}

static float	surface(Point const &p1, Point const &p2, Point const &p3)
{
	float	x1, x2, x3;
	float	y1, y2, y3;
	float	area;

	x1 = p1.getX();
	x2 = p2.getX();
	x3 = p3.getX();
	y1 = p1.getY();
	y2 = p2.getY();
	y3 = p3.getY();
	area = absf(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2;
	return (area);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	float	sub_area1, sub_area2, sub_area3;
	float	full_area;

	full_area = surface(a, b, c);
	sub_area1 = surface(a, b, point);
	sub_area2 = surface(b, c, point);
	sub_area3 = surface(a, c, point);
	if (sub_area1 == 0 || sub_area2 == 0 || sub_area3 == 0)
	{
		return (false);
	}
	else
	{
		return (sub_area1 + sub_area2 + sub_area3 == full_area);
	}
}
