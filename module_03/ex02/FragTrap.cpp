/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:21:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/21 19:08:25 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("frag_trap")
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " is created" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &fragtrap) : ClapTrap(fragtrap)
{
	std::cout << "FragTrap " << this->_name << " is copied" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &fragtrap)
{
	this->_name = fragtrap._name;
	this->_hit_points = fragtrap._hit_points;
	this->_energy_points = fragtrap._energy_points;
	this->_attack_damage = fragtrap._attack_damage;
	return (*this);
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " is created" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " is destroyed" << std::endl;
	return ;
}

void	FragTrap::attack(std::string const &target)
{
	if (this->_energy_points == 0)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy";
		std::cout << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage !";
	std::cout << std::endl;
	--(this->_energy_points);
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy";
		std::cout << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " gains " << amount;
	std::cout << " points of health !" << std::endl;
	this->_hit_points += amount;
	if (this->_hit_points > 100)
	{
		this->_hit_points = 100;
	}
	--(this->_energy_points);
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " takes " << amount;
	std::cout << " points of damage !" << std::endl;
	this->_hit_points -= amount;
	if (this->_hit_points < 0)
	{
		this->_hit_points = 0;
	}
	return ;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " high fives guys !";
	std::cout << std::endl;
	return ;
}
