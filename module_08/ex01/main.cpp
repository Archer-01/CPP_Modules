/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:50:34 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 16:11:49 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <list>
#include <cstdlib>

int	main(void)
{
	// * Test no.1
	{
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span: " << sp.longestSpan() << std::endl;
	}

	// * Test no.2
	{
		Span			sp = Span(8);
		std::list<int>	lst;

		sp.addNumber(1);
		sp.addNumber(2);
		sp.addNumber(3);

		lst.push_back(4);
		lst.push_back(5);
		lst.push_back(6);
		lst.push_back(7);
		lst.push_back(8);

		sp.addRange< std::list<int> >(lst.cbegin(), lst.cend());
		sp.print();
	}


	// * Test no.3
	{
		Span	sp = Span(100000);

		srand(time(NULL));
		for (int i = 0; i < 100000; i++)
		{
			int const	num = rand();
			sp.addNumber(num);
		}
	}

	// * Test no.4
	{
		Span	sp(1);

		sp.addNumber(1);
		try
		{
			sp.addNumber(2);
		}
		catch (std::runtime_error const &exception)
		{
			std::cerr << "Error: " << exception.what() << std::endl;
		}
	}

	return (0);
}
