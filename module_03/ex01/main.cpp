/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:35:03 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 18:07:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int	main(void)
{
	std::string const	YELLOW = "\033[1;33m";
	std::string const	BLUE = "\033[1;34m";
	std::string const	NC = "\033[0m";
	ScavTrap			jotaro(BLUE + "Jotaro" + NC);
	ScavTrap			dio(YELLOW + "Dio" + NC);

	jotaro.attack(dio.getName());
	dio.takeDamage(20);
	dio.beRepaired(10);
	dio.attack(jotaro.getName());
	jotaro.takeDamage(20);
	dio.guardGate();
	jotaro.showStats();
	dio.showStats();
	return (0);
}
