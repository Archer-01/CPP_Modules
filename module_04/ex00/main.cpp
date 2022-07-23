/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:00:26 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 13:11:55 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

// * Default Test
int	main(void)
{
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;
	return (0);
}

// * Test with Animal array
// int	main(void)
// {
// 	Animal const	**arr = NULL;

// 	arr = new Animal const*[3];
// 	arr[0] = new Animal();
// 	arr[1] = new Dog();
// 	arr[2] = new Cat();
// 	for (short i = 0; i < 3; ++i)
// 	{
// 		std::cout << arr[i]->getType() << "\t| SOUND: ";
// 		arr[i]->makeSound();
// 	}
// 	for (short i = 0; i < 3; ++i)
// 	{
// 		delete arr[i];
// 	}
// 	delete [] arr;
// 	return (0);
// }

// * Wrong Animals Test
// int	main(void)
// {
// 	WrongAnimal	*wa = new WrongAnimal();
// 	WrongAnimal	*wc = new WrongCat();

// 	std::cout << wa->getWrongType() << " " << std::endl;
// 	wa->makeWrongSound();
// 	std::cout << wc->getWrongType() << " " << std::endl;
// 	wc->makeWrongSound();
// 	delete wa;
// 	delete wc;
// 	return (0);
// }
