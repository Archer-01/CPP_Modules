/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:00:26 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:38:19 by hhamza           ###   ########.fr       */
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
	Animal const	**arr = NULL;

	arr = new Animal const*[4];
	arr[0] = new Dog();
	arr[1] = new Dog();
	arr[2] = new Cat();
	arr[3] = new Cat();
	for (short i = 0; i < 4; ++i)
	{
		arr[i]->makeSound();
	}
	for (short i = 0; i < 4; ++i)
	{
		delete arr[i];
	}
	delete [] arr;
	return (0);
}

// * Subject Test
// int	main(void)
// {
// 	const Animal	*j = new Dog();
// 	const Animal	*i = new Cat();

// 	delete j;//should not create a leak
// 	delete i;
// 	return 0;
// }
