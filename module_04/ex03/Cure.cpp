/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:10:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:40:53 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	// Empty body
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	(void) src;
	return ;
}

Cure::~Cure(void)
{
	// Empty body
}

Cure	&Cure::operator=(Cure const &rhs)
{
	(void) rhs;
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	return (new Cure());
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
