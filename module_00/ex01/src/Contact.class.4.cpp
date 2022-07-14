/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.4.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 13:19:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 13:19:55 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/**
 * @brief Get contact ID.
 *
 * @return unsigned int: Contact ID
 */
unsigned int 	Contact::getId(void) const
{
	return (this->_id);
}
