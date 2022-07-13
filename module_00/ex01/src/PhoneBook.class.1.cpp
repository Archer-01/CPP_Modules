/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.1.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:03:11 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 12:11:52 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"

/**
 * @brief PhoneBook default constructor.
 *
 */
PhoneBook::PhoneBook(void) :
	_nb_contacts(0),
	_next_index(0)
{
	bzero(this->_contacts, 8 * sizeof(Contact));
}

/**
 * @brief PhoneBook destructor.
 *
 */
PhoneBook::~PhoneBook(void)
{
	// Empty body
}
