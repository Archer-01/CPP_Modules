/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:35:03 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 16:49:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int	main(void)
{
	std::string const	YELLOW = "\033[1;33m";
	std::string const	BLUE = "\033[1;34m";
	std::string const	NC = "\033[0m";
	ClapTrap			jotaro(BLUE + "Jotaro" + NC);
	ClapTrap			dio(YELLOW + "Dio" + NC);

	jotaro.attack(dio.getName());
	dio.takeDamage(0);
	dio.beRepaired(100);
	dio.attack(jotaro.getName());
	jotaro.takeDamage(0);
	jotaro.showStats();
	dio.showStats();
	return (0);
}
