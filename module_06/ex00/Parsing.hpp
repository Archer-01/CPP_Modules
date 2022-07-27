/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Parsing.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 15:47:48 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 10:36:58 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSING_HPP
# define PARSING_HPP

# include "Utils.hpp"
# include <string>

namespace Parsing
{
	bool	parseChar(std::string const &str);
	bool	parseUnsignedInt(std::string const &str);
	bool	parseInt(std::string const &str);
	bool	parseDouble(std::string const &str);
	bool	parseFloat(std::string const &str);
}

#endif