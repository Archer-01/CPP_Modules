/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:14:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:53:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : AAnimal("Cat"), _brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &cat) : AAnimal(cat), _brain(new Brain())
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
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return ;
}
