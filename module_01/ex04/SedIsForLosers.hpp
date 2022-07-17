/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:18:36 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 13:27:36 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEDISFORLOSERS_HPP
# define SEDISFORLOSERS_HPP

#include <fstream>
#include <string>
#include <cstdlib>
#include <iostream>

class SedIsForLosers
{
	private:
		std::ifstream	_src;
		std::ofstream	_dest;

	public:
		SedIsForLosers(const std::string filename);
		~SedIsForLosers(void);
		void			run(const std::string s1, const std::string s2);
};

#endif