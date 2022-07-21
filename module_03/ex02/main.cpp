/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:35:03 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 18:46:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int	main(void)
{
	std::string const	YELLOW = "\033[1;33m";
	std::string const	BLUE = "\033[1;34m";
	std::string const	NC = "\033[0m";
	FragTrap			jotaro(BLUE + "Jotaro" + NC);
	FragTrap			dio(YELLOW + "Dio" + NC);

	jotaro.attack(dio.getName());
	dio.takeDamage(30);
	dio.beRepaired(30);
	dio.attack(jotaro.getName());
	jotaro.takeDamage(30);
	dio.highFivesGuys();
	jotaro.showStats();
	dio.showStats();
	return (0);
}
