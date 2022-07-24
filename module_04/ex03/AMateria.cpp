/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:08:56 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:38:16 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("amateria")
{
	// Empty body
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	// Empty body
}

AMateria::AMateria(AMateria const &src) : _type(src._type)
{
	// Empty body
}

AMateria::~AMateria(void)
{
	// Empty body
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void) rhs;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "* materia being used *" << std::endl;
	return ;
}
