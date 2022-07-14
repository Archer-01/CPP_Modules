/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:26:20 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/14 13:22:12by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBookUtils.hpp"

std::string	PhoneBookUtils::readCmd(std::string prompt)
{
	std::string	cmd;

	std::cout << prompt;
	std::getline(std::cin, cmd);
	if (std::cin.eof() == true)
	{
		exit(EXIT_SUCCESS);
	}
	else if (cmd.empty() == true)
	{
		return (readCmd(prompt));
	}
	return (cmd);
}

static std::string	getField(std::string prompt)
{
	std::string	field;

	field = PhoneBookUtils::readCmd(prompt);
	if (std::cin.eof() == true)
	{
		exit(EXIT_SUCCESS);
	}
	return (field);
}

void	PhoneBookUtils::ADD(PhoneBook *phonebook)
{
	std::string	fname;
	std::string	lname;
	std::string	nname;
	std::string	num;
	std::string	secret;

	fname = getField(ADD_FNAME);
	lname = getField(ADD_LNAME);
	nname = getField(ADD_NNAME);
	num = getField(ADD_NUM);
	secret = getField(ADD_SECRET);

	Contact	c = Contact(fname, lname, nname, num, secret);

	phonebook->addContact(c);
	std::cout << "Contact added successfully!" << std::endl;
	return ;
}
