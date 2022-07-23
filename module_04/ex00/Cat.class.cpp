/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:14:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:08:32 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
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
