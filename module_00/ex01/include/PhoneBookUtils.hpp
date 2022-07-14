/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:20:35 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/14 13:50:24 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKUTILS_HPP
# define PHONEBOOKUTILS_HPP

# include "PhoneBook.class.hpp"
# include <iostream>
# include <cstdlib>

namespace PhoneBookUtils
{
	const std::string	GREEN = "\033[1;32m";
	const std::string	BLUE = "\033[1;34m";
	const std::string	NC = "\033[m";

	const std::string	MAIN_PROMPT = BLUE + "myAwesomePhoneBook>" + NC + " ";
	const std::string	ADD_FNAME = GREEN + "ADD [first_name]>" + NC + " ";
	const std::string	ADD_LNAME = GREEN + "ADD [last_name]>" + NC + " ";
	const std::string	ADD_NNAME = GREEN + "ADD [nickname]>" + NC + " ";
	const std::string	ADD_NUM = GREEN + "ADD [phone_number]>" + NC + " ";
	const std::string	ADD_SECRET = GREEN + "ADD [darkest_secret]>" + NC + " ";

	std::string	readCmd(std::string prompt);
	void		ADD(PhoneBook *phoneBook);
	void		SEARCH(PhoneBook *phoneBook);
}

#endif