/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:15:04 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:30:47 by hhamza           ###   ########.fr       */
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

	for (int i = 0; i < 4; ++i)
	{
		delete this->_inventory[i];
		if (src._inventory[i] != NULL)
		{
			this->_inventory[i] = src._inventory[i]->clone();
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
		for (short i = 0; i < 4; ++i)
		{
			delete this->_inventory[i];
			if (rhs._inventory[i] != NULL)
			{
				this->_inventory[i] = rhs._inventory[i]->clone();
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
	for (short i = 0; i < 4; ++i)
	{
		delete this->_inventory[i];
	}
	std::cout << "Character destructor called" << std::endl;
	return ;
}

std::string const	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_materia_count < 4)
	{
		for (short i = 0; i < 4; ++i)
		{
			if (this->_inventory[i] == NULL)
			{
				this->_inventory[i] = m;
				++(this->_materia_count);
				return ;
			}
		}
	}
	return ;
}

void	Character::unequip(int idx)
{
	this->_inventory[idx] = NULL;
	--(this->_materia_count);
	return ;
}

void	Character::use(int idx, ICharacter &target) const
{
	if (this->_inventory[idx] != NULL)
	{
		this->_inventory[idx]->use(target);
	}
	return ;
}
