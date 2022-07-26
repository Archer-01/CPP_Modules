/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 13:00:23 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/26 18:59:51 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Parsing.hpp"

namespace Convert
{
	typedef enum e_types
	{
		CHAR_TYPE,
		INT_TYPE,
		FLOAT_TYPE,
		DOUBLE_TYPE,
		UNKNOWN_TYPE
	}	t_types;

	t_types	getType(std::string const &literal);
	void	convertChar(std::string const &literal);
	void	convertInt(std::string const &literal);
	void	convertFloat(std::string const &literal);
}

#endif