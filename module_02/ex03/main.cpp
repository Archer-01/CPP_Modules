/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 08:11:46 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/20 10:11:45 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define NC "\033[0m"

bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	float	aX, bX, cX, pX;
	float	aY, bY, cY, pY;

	std::cout << RED <<"A(x) = " << NC;
	std::cin >> aX;
	std::cout << RED << "A(y) = " << NC;
	std::cin >> aY;
	std::cout << GREEN << "B(x) = " << NC;
	std::cin >> bX;
	std::cout << GREEN << "B(y) = " << NC;
	std::cin >> bY;
	std::cout << BLUE << "C(x) = " << NC;
	std::cin >> cX;
	std::cout << BLUE << "C(y) = " << NC;
	std::cin >> cY;
	std::cout << YELLOW << "P(x) = " << NC;
	std::cin >> pX;
	std::cout << YELLOW << "P(y) = " << NC;
	std::cin >> pY;

	Point	a(aX, aY);
	Point	b(bX, bY);
	Point	c(cX, cY);
	Point	p(pX, pY);

	if (bsp(a, b, c, p) == true)
	{
		std::cout << "Point p is " << GREEN << "in" << NC << " the triangle";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "Point p is " << RED << "not in" << NC << " the triangle";
		std::cout << std::endl;
	}
	return (0);
}
