/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:10:27 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 19:05:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) :
	_name("clap_trap"),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit_points(10),
	_energy_points(10),
	_attack_damage(0)
{
	std::cout << "ClapTrap " << this->_name << " is created" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &claptrap) :
	_name(claptrap._name),
	_hit_points(claptrap._hit_points),
	_energy_points(claptrap._energy_points),
	_attack_damage(claptrap._attack_damage)
{
	std::cout << "ClapTrap " << this->_name << " is copied" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &claptrap)
{
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage !";
	std::cout << std::endl;
	--(this->_energy_points);
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " takes " << amount;
	std::cout << " points of damage !" << std::endl;
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
	{
		this->_hit_points = 0;
	}
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy";
		std::cout << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " gains " << amount;
	std::cout << " points of health !" << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points > 10)
	{
		this->_hit_points = 10;
	}
	--(this->_energy_points);
	return ;
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::showStats(void) const
{
	std::cout << this->_name << "\t| HP=" << this->_hit_points;
	std::cout << " | EP=" << this->_energy_points << " |" << std::endl;
	return ;
}
