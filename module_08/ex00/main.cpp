/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:07:28 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 11:05:32 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	std::vector<int>					arr;
	std::vector<int>::const_iterator	it;

	for (short i = 0; i < 42; ++i)
	{
		arr.push_back(i + 1);
	}
	try
	{
		it = easyfind(arr, 42);
	}
	catch (std::runtime_error const &exception)
	{
		std::cerr << exception.what() << std::endl;
		return (1);
	}
	std::cout << "Found " << *it << std::endl;
	return (0);
}
