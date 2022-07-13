/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.2.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:58:43 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/13 12:49:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.class.hpp"

/**
 * @brief Modify output stream.
 * Align output to the right.
 * Set output maximum width to 10 characters.
 * Set fill character to dot "."
 *
 */
static void	modifyOutputStream(void)
{
	std::cout << std::right;
	std::cout << std::setw(10);
	std::cout << std::setfill('.');
	return ;
}

/**
 * @brief Display contact field. If field length is greater than 10 characters,
 * it gets truncated and the last printable character gets replaced with a dot.
 *
 * @param field: Contact field to display
 */
static void	displayField(std::string field)
{
	modifyOutputStream();
	if (field.length() <= 10)
	{
		std::cout << field;
	}
	else
	{
		std::cout << field.substr(0, 9) + ".";
	}
	return ;
}

/**
 * @brief Calculate unsigned integer length in digits.
 *
 * @param num: Number to calculate length
 * @return size_t: Number of digits
 */
static size_t	num_length(unsigned int num)
{
	size_t	len;

	if (num == 0)
	{
		return (0);
	}
	len = 0;
	while (num != 0)
	{
		num /= 10;
		++len;
	}
	return (len);
}

/**
 * @brief Convert unsigned int to string format
 *
 * @param num: Unsigned integer to convert.
 * @return std::string: Converted string.
 */
static std::string	to_string(unsigned int num)
{
	std::string	result;
	size_t		num_len;

	if (num == 0)
	{
		result = "0";
	}
	else
	{
		num_len = num_length(num);
		result = "";
		while (num_len != 0)
		{
			result += (num / pow(10, num_len - 1)) + '0';
			num %= (size_t) pow(10, num_len - 1);
			--num_len;
		}
	}
	return (result);
}

/**
 * @brief Display brief contact information (ID, first name, last name and
 * nickname)
 *
 */
void	Contact::displayBrief(void) const
{
	displayField(to_string(this->_id));
	std::cout << "|";
	displayField(this->_first_name);
	std::cout << "|";
	displayField(this->_last_name);
	std::cout << "|";
	displayField(this->_nickname);
	std::cout << std::endl;
	return ;
}
