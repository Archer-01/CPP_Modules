/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:53:12 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:54:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"

AAnimal::AAnimal(void) : _type("Animal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(std::string const &type) : _type(type)
{
	std::cout << "AAnimal constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(AAnimal const &animal) : _type(animal._type)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(AAnimal const &AAnimal)
{
	this->_type = AAnimal._type;
	return (*this);
}

std::string	AAnimal::getType(void) const
{
	return (this->_type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "* AAnimal SOUND *" << std::endl;
	return ;
}
