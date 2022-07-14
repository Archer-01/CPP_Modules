/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 14:01:10 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/16 18:02:18 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <string>
# include <iostream>
# include <iomanip>
# include <cmath>

class Contact
{
	private:
		static int			_next_id;
		static int			_getNextId(void);

		int					_id;
		std::string			_first_name;
		std::string			_last_name;
		std::string			_nickname;
		std::string			_phone_num;
		std::string			_darkest_secret;

	public:
		Contact(void);
		Contact(std::string fname, std::string lname, std::string nname, \
			std::string num, std::string secret);
		~Contact(void);
		void				displayBrief(void) const;
		void				displayAll(void) const;
		unsigned int		getId(void) const;
};

#endif