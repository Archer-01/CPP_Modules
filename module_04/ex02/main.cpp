/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:00:26 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:58:49 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

// * Default Test
int	main(void)
{
	AAnimal const	**arr = NULL;

	arr = new AAnimal const*[4];
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

// * Abstract Class Test
// ! This test will not compile successfully
// int	main(void)
// {
// 	AAnimal	a;

// 	return (0);
// }
