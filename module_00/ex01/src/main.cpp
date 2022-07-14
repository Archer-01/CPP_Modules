/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 13:52:16 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/14 14:44:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "PhoneBookUtils.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	cmd;

	cmd = PhoneBookUtils::readCmd(PhoneBookUtils::MAIN_PROMPT);
	while (std::cin.eof() == false)
	{
		if (cmd == "ADD")
		{
			PhoneBookUtils::ADD(&phonebook);
		}
		else if (cmd == "SEARCH")
		{
			PhoneBookUtils::SEARCH(&phonebook);
		}
		else if (cmd == "EXIT")
		{
			break ;
		}
		cmd = PhoneBookUtils::readCmd(PhoneBookUtils::MAIN_PROMPT);
	}
	return (0);
}
