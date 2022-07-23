/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:13:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:09:27 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(Dog const &dog)
{
	this->_type = dog._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof!" << std::endl;
	return ;
}
