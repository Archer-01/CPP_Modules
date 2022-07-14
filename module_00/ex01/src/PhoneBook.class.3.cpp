/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.3.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:15:04 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/14 10:52:07 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/**
 * @brief Test if contact exists on PhoneBook.
 *
 * @param id: Contact ID
 * @return bool: true is contact exists, false otherwise
 */
bool	PhoneBook::hasContact(unsigned int id) const
{
	for (size_t i = 0; i < this->_nb_contacts; ++i)
	{
		if (this->_contacts[i].getId() == id)
		{
			return (true);
		}
	}
	return (false);
}

/**
 * @brief Get contact entry from PhoneBook.
 *
 * @param id: Contact ID to retreive
 * @return Contact: Contact entry object
 */
Contact	PhoneBook::getContact(unsigned int id) const
{
	size_t	index;
	size_t	i;

	index = 0;
	for (i = 0; i < this->_nb_contacts; ++i)
	{
		if (this->_contacts[i].getId() == id)
		{
			index = i;
			break;
		}
	}
	return (this->_contacts[index]);
}
