/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:30:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:53:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : _wrong_type("Wrong AAnimal")
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string const &wrong_type) :
	_wrong_type(wrong_type)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &wrong_animal) :
	_wrong_type(wrong_animal._wrong_type)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &wrong_animal)
{
	this->_wrong_type = wrong_animal._wrong_type;
	return (*this);
}

std::string	WrongAnimal::getWrongType(void) const
{
	return (this->_wrong_type);
}

void	WrongAnimal::makeWrongSound(void) const
{
	std::cout << "* WRONG ANINAL SOUND *" << std::endl;
	return ;
}
