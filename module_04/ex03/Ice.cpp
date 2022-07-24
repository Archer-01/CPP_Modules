/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:09:51 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:41:06 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// Empty body
}

Ice::Ice(Ice const &src) : AMateria("ice")
{
	(void) src;
	return ;
}

Ice::~Ice(void)
{
	// Empty body
}

Ice	&Ice::operator=(Ice const &rhs)
{
	(void) rhs;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
	std::cout << std::endl;
	return ;
}
