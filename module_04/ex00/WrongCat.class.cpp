/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 12:06:50 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:45:31 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat(void) : WrongAnimal("Wrong Cat")
{
	std::cout << "WrongCat default constructor called" << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &wrong_cat) : WrongAnimal(wrong_cat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrong_cat)
{
	this->_wrong_type = wrong_cat._wrong_type;
	return (*this);
}

void	WrongCat::makeWrongSound(void) const
{
	std::cout << "Wrong Meow!" << std::endl;
	return ;
}
