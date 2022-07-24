/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 09:14:20 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 10:20:52 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include <iostream>

// * Default Test
int	main(void)
{
	IMateriaSource	*src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter		*me = new Character("me");
	AMateria		*tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter		*bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	return (0);
}

// * Character Test
// int	main(void)
// {
// 	ICharacter	*me = new Character("me");
// 	AMateria	*tmp;

// 	me->equip(new Ice());
// 	me->equip(new Cure());
// 	tmp = me->getMateria(0);
// 	me->unequip(0);
// 	delete tmp;
// 	delete me;
// 	return (0);
// }
