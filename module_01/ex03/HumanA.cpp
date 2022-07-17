/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:57:12 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 11:06:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name),
	_weapon(weapon)
{
	// Empty body
}

void	HumanA::attack(void)
{
	std::cout << this->_name;
	std::cout << " attacks with their " << this->_weapon.getType();
	std::cout << std::endl;
	return ;
}
