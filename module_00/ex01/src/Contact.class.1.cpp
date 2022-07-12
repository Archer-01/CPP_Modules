/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.1.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:08:52 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/12 19:51:17 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

unsigned int Contact::_next_id = 0;

/**
 * @brief Get contact next ID
 *
 * @return int: next ID
 */
unsigned int	Contact::_getNextId(void)
{
	Contact::_next_id += 1;
	return (Contact::_next_id);
}

/**
 * @brief Construct a new Contact object
 *
 * @param fname: First name
 * @param lname: Last name
 * @param nname: Nickname
 * @param num: Phone number
 * @param secret: Darkest secret
 */
Contact::Contact(std::string fname, std::string lname, std::string nname, \
	std::string num, std::string secret) :
		_id(Contact::_getNextId()),
		_first_name(fname),
		_last_name(lname),
		_nickname(nname),
		_phone_num(num),
		_darkest_secret(secret)
{
	// Empty body
}

/**
 * @brief Contact object destructor
 *
 */
Contact::~Contact(void)
{
	// Empty body
}
