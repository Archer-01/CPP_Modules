/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 11:19:33 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/17 13:34:46 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	SedIsForLosers	sed_is_for_losers(argv[1]);

	if (argc != 4)
	{
		std::cerr << "Usage: ./sed_is_for_losers <filename> <s1> <s2>";
		std::cerr << std::endl;
		return (1);
	}
	sed_is_for_losers.run(argv[2], argv[3]);
	return (0);
}
