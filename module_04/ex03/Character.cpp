/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:15:04 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 20:02:05 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _name("default"), _materia_count(0)
{
	bzero(_inventory, 4 * sizeof(AMateria *));
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(std::string const &name) : _name(name), _materia_count(0)
{
	bzero(this->_inventory, 4 * sizeof(AMateria *));
	std::cout << "Character constructor called" << std::endl;
	return ;
}

Character::Character(Character const &src) :
	_name(src._name),
	_materia_count(src._materia_count)
{
	for (short i = 0; i < this->_materia_count; ++i)
	{
		delete this->_inventory[i];
		if (src._inventory[i]->getType() == "ice")
		{
			this->_inventory[i] = new Ice();
		}
		else if (src._inventory[i]->getType() == "cure")
		{
			this->_inventory[i] = new Cure();
		}
		else
		{
			this->_inventory[i] = NULL;
		}
	}
	std::cout << "Character copy constructor called" << std::endl;
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this != &rhs)
	{
		this->_name = rhs._name;
		this->_materia_count = rhs._materia_count;
		for (short i = 0; i < this->_materia_count; ++i)
		{
			delete this->_inventory[i];
			if (rhs._inventory[i]->getType() == "ice")
			{
				this->_inventory[i] = new Ice();
			}
			else if (rhs._inventory[i]->getType() == "cure")
			{
				this->_inventory[i] = new Cure();
			}
			else
			{
				this->_inventory[i] = NULL;
			}
		}
	}
	return (*this);
}

Character::~Character(void)
{
	for (short i = 0; i < this->_materia_count; ++i)
	{
		delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
	return ;
}
