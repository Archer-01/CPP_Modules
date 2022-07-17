/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 14:26:47 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 15:00:16 by hhamza           ###   ########.fr       */
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

t_harl_level	Harl::getLevel(std::string level)
{
	if (level == "DEBUG")
	{
		return (HARL_DEBUG);
	}
	else if (level == "INFO")
	{
		return (HARL_INFO);
	}
	else if (level == "WARNING")
	{
		return (HARL_WARNING);
	}
	else if (level == "ERROR")
	{
		return (HARL_ERROR);
	}
	else
	{
		return (HARL_UNKNOWN);
	}
}

void	Harl::filter(std::string level)
{
	t_harl_level	lvl;

	lvl = getLevel(level);
	switch (lvl)
	{
		case (HARL_DEBUG):
		{
			std::cout << "[ DEBUG ]" << std::endl;
			this->debug();
			std::cout << std::endl;
		}
		case (HARL_INFO):
		{
			std::cout << "[ INFO ]" << std::endl;
			this->info();
			std::cout << std::endl;
		}
		case (HARL_WARNING):
		{
			std::cout << "[ WARNING ]" << std::endl;
			this->warning();
			std::cout << std::endl;
		}
		case (HARL_ERROR):
		{
			std::cout << "[ ERROR ]" << std::endl;
			this->error();
			std::cout << std::endl;
			break ;
		}
		default:
		{
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
		}
	}
	return ;
}
