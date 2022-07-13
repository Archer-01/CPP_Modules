/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 12:02:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 12:18:36 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include "Contact.class.hpp"
# include <cstring>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		size_t	_nb_contacts;
		size_t	_next_index;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(Contact newcontact);
		void	displayContacts(void) const;
};

#endif