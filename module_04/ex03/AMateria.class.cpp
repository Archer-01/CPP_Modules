/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:20:15 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 15:24:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"

AMateria::AMateria(void) : _type("amateria")
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
	return ;
}

AMateria::AMateria(AMateria const &src) : _type(src._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}
