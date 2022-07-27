/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:34:09 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 08:03:48 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <stdexcept>

static Base	*generate(void)
{
	short	num;

	srand(time(NULL));
	num = rand() % 3;
	switch (num)
	{
		case (0):
		{
			return (new A());
		}
		case (1):
		{
			return (new B());
		}
		case (2):
		{
			return (new C());
		}
	}
	return (NULL);
}

static void	identify(Base *p)
{
	A	*aptr;
	B	*bptr;
	C	*cptr;

	aptr = dynamic_cast<A *>(p);
	if (aptr != NULL)
	{
		std::cout << "A" << std::endl;
	}
	bptr = dynamic_cast<B *>(p);
	if (bptr != NULL)
	{
		std::cout << "B" << std::endl;
	}
	cptr = dynamic_cast<C *>(p);
	if (cptr != NULL)
	{
		std::cout << "C" << std::endl;
	}
}

static void	identify(Base &p)
{
	try
	{
		A	&aref = dynamic_cast<A &>(p);
		(void) aref;
	}
	catch (std::bad_cast const &exception)
	{
		try
		{
			B	&bref = dynamic_cast<B &>(p);
			(void) bref;
		}
		catch (std::bad_cast const &exception)
		{
			try
			{
				C	&cref = dynamic_cast<C &>(p);
				(void) cref;
			}
			catch (std::bad_cast const &exception)
			{
				std::cout << "Unknown" << std::endl;
			}
			std::cout << "C" << std::endl;
			return ;
		}
		std::cout << "B" << std::endl;
		return ;
	}
	std::cout << "A" << std::endl;
	return ;
}

int	main(void)
{
	Base	*ptr;

	ptr = generate();
	identify(ptr);
	identify(*ptr);
	return (0);
}
