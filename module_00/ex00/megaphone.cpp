/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:07:35 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/07 16:26:08 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/**
 * @brief Print string in uppercase format
 *
 * @param str: String to print in uppercase format
 */
void	printUpperCase(std::string str)
{
	for (size_t i = 0; i < str.size(); ++i)
	{
		std::cout << (char) std::toupper(str[i]);
	}
}

int	main(int argc, char **argv)
{
	std::string	str;

	(void) argv;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; ++i)
		{
			str = argv[i];
			printUpperCase(str);
		}
		std::cout << std::endl;
	}
	return (0);
}
