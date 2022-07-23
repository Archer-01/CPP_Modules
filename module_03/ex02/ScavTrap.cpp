/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:03:22 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 18:05:31by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("scav_trap")
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " is created";
	std::cout << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap) : ClapTrap(scavtrap)
{
	std::cout << "ScavTrap " << this->_name << " is copied";
	std::cout << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scavtrap)
{
	this->_name = scavtrap._name;
	this->_hit_points = scavtrap._hit_points;
	this->_energy_points = scavtrap._energy_points;
	this->_attack_damage = scavtrap._attack_damage;
	return (*this);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " is created" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_hit_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		return ;
	}
	else if (this->_energy_points == 0)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage !";
	std::cout << std::endl;
	--(this->_energy_points);
	return ;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << "ScavTrap " << this->_name;
	std::cout << " switched to gatekeeper mode!" << std::endl;
	return ;
}
