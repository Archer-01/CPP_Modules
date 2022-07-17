/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:02:01 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 11:13:41 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_weapon(NULL)
{
	// Empty body
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	return ;
}

void	HumanB::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their " << this->_weapon->getType();
	std::cout << std::endl;
	return ;
}
