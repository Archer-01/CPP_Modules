/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:13:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 18:34:19 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog) : Animal(dog), _brain(new Brain())
{
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *dog._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
	return ;
}
