/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:26:47 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 14:37:16 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "HARL: Debug message" << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "HARL: Info message" << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "HARL: Warning message" << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "HARL: Error message" << std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func)(void);

	if (level == "DEBUG")
	{
		func = &Harl::debug;
	}
	else if (level == "INFO")
	{
		func = &Harl::info;
	}
	else if (level == "WARNING")
	{
		func = &Harl::warning;
	}
	else if (level == "ERROR")
	{
		func = &Harl::error;
	}
	else
	{
		std::cerr << "Error: Unknown HARL level" << std::endl;
		return ;
	}
	(this->*func)();
	return ;
}
