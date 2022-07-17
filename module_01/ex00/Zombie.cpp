/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:06:39 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 10:11:18 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) :
	_name(name)
{
	// Empty body
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie [" << this->_name << "] was destroyed" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << "  BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}
