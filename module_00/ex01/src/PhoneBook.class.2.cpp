/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.2.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:03:25 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 13:08:04 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

void	PhoneBook::addContact(Contact newcontact)
{
	size_t	curr_index;

	if (this->_next_index == 8)
	{
		this->_next_index = 0;
	}
	curr_index = this->_next_index;
	this->_contacts[curr_index] = newcontact;
	this->_next_index += 1;
	if (this->_nb_contacts != 8)
	{
		this->_nb_contacts += 1;
	}
	return ;
}

/**
 * @brief Display all contacts briefly.
 *
 */
void	PhoneBook::displayContacts(void) const
{
	for (size_t i = 0; i < this->_nb_contacts; ++i)
	{
		this->_contacts[i].displayBrief();
	}
	return ;
}
