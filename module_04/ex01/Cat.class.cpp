/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:14:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 18:35:04 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &cat) : Animal(cat), _brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
	return ;
}

Cat	&Cat::operator=(Cat const &cat)
{
	this->_type = cat._type;
	delete this->_brain;
	this->_brain = new Brain();
	*(this->_brain) = *cat._brain;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return ;
}
