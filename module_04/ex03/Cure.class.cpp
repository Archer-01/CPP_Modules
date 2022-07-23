/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:41:56 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 15:43:36 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
	return ;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure(*this));
}
