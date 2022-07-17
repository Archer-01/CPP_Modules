/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:28:14 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 10:31:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*zombies_ptr;

	zombies_ptr = new Zombie[N];
	for (int i = 0; i < N; ++i)
	{
		zombies_ptr[i].setName(name);
	}
	return (zombies_ptr);
}
