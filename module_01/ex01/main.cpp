/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:32:15 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 10:33:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

#define N 10

int	main(void)
{
	Zombie	*zombies_ptr;

	zombies_ptr = zombieHorde(N, "Bob");
	for (int i = 0; i < N; ++i)
	{
		zombies_ptr[i].announce();
	}
	delete [] zombies_ptr;
	return (0);
}
