/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:35:05 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 17:03:53 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>
#include <iomanip>

static void	increment(int &num)
{
	++num;
	return ;
}

static void	print(int const &num)
{
	std::cout << std::setprecision(1);
	std::cout << std::setiosflags(std::ios::fixed);
	std::cout << num << std::endl;
	return ;
}

static void	print(float const &num)
{
	std::cout << num << std::endl;
	return ;
}

int	main(void)
{
	int		tab1[] = {0, 1, 2, 3, 4};
	float	tab2[] = {0.0, 1.1, 2.2, 3.3, 4.4};

	iter(tab1, 5, &increment);
	iter(tab1, 5, &print);
	iter(tab2, 5, &print);
	return (0);
}
