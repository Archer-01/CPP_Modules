/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:21:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/22 07:40:35 by hhamza           ###   ########.fr       */
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

void	FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->_name << " high fives guys !";
	std::cout << std::endl;
	return ;
}
