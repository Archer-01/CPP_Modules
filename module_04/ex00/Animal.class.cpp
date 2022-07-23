/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:12:08 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:09:04 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(Animal const &animal) : _type(animal._type)
{
	std::cout << "Animal copy constructor called" << std::endl;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &animal)
{
	this->_type = animal._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
	return ;
}
