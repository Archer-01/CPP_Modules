/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:17:03 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 10:17:54 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie_ptr;

	zombie_ptr = newZombie("Bob");
	zombie_ptr->announce();
	delete zombie_ptr;
	randomChump("Jim");
	return (0);
}
