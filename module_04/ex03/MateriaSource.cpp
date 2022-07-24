/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:21:37 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:10:25 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materia_count(0)
{
	bzero(this->_materias, 4 * sizeof(AMateria *));
	std::cout << "MateriaSource constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src) :
	_materia_count(src._materia_count)
{
	for (short i = 0; i < 4; ++i)
	{
		delete this->_materias[i];
		if (src._materias[i] != NULL)
		{
			this->_materias[i] = src._materias[i]->clone();
		}
		else
		{
			this->_materias[i] = NULL;
		}
	}
	std::cout << "MateriaSource copy constructor called" << std::endl;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (short i = 0; i < 4; ++i)
	{
		delete this->_materias[i];
	}
	std::cout << "MateriaSource destructor called" << std::endl;
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		this->_materia_count = rhs._materia_count;
		for (short i = 0; i < 4; ++i)
		{
			delete this->_materias[i];
			if (rhs._materias[i] != NULL)
			{
				this->_materias[i] = rhs._materias[i]->clone();
			}
			else
			{
				this->_materias[i] = NULL;
			}
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (this->_materia_count < 4)
	{
		for (short i = 0; i < 4; ++i)
		{
			if (this->_materias[i] == NULL)
			{
				this->_materias[i] = m;
				++(this->_materia_count);
				return ;
			}
		}
	}
	return ;
}

AMateria	*MateriaSource::createMateria(std::string const &type) const
{
	for (short i = 0; i < 4; ++i)
	{
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
		{
			return (this->_materias[i]->clone());
		}
	}
	return (NULL);
}
