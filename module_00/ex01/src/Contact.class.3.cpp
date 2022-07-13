/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.3.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 11:32:40 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 11:38:01 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/**
 * @brief Display detailed info about contact.
 *
 */
void	Contact::displayAll(void) const
{
	std::cout << "ID: " << this->_id << std::endl;
	std::cout << "First name: " << this->_first_name << std::endl;
	std::cout << "Last name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Phone number: " << this->_phone_num << std::endl;
	std::cout << "Darkest secret: " << this->_darkest_secret << std::endl;
	return ;
}
