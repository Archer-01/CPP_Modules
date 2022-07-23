/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:09:51 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 18:09:55 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice(*this));
}
