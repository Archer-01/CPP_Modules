/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:06:27 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 20:04:18 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "---------- Test no.1 ----------" << std::endl;
	// * Test no.1
	{
		MutantStack<int>	mstack;

		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator	it = mstack.begin();
		MutantStack<int>::iterator	ite = mstack.end();

		it++;
		it--;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "---------- Test no.2 ----------" << std::endl;
	// * Test no.2
	{
		MutantStack<float>	mstack;
		MutantStack<float>	mstack2(mstack);

		mstack.push(1.9f);
		mstack.push(2.8f);
		mstack.push(3.7f);
		mstack.push(4.6f);
		mstack.push(5.5f);
		mstack.pop();

		MutantStack<float>::iterator	it = mstack.begin();
		MutantStack<float>::iterator	ite = mstack.end();

		std::cout << "size: " << mstack.size() << std::endl;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			it++;
		}
	}
	return (0);
}
