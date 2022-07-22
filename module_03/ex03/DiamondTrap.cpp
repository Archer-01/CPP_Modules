/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:14:52 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/22 07:52:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
	ScavTrap("diamond_trap"),
	FragTrap("diamond_trap"),
	_name("diamond_trap")
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap " << this->_name << " is created" << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondtrap) :
	ScavTrap(diamondtrap),
	FragTrap(diamondtrap),
	_name(diamondtrap._name)
{
	std::cout << "DiamondTrap " << this->_name << " is copied" << std::endl;
	return ;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &diamondtrap)
{
	this->ClapTrap::_name = diamondtrap.ClapTrap::_name;
	this->_name = diamondtrap._name;
	this->_hit_points = diamondtrap._hit_points;
	this->_energy_points = diamondtrap._energy_points;
	this->_attack_damage = diamondtrap._attack_damage;
	return (*this);
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	_name(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 30;
	std::cout << "DiamondTrap " << this->_name << " is created" << std::endl;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "whoAmI: " << this->_name << " / " << this->ClapTrap::_name;
	std::cout  << std::endl;
	return ;
}
