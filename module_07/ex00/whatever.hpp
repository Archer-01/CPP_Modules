/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:08:43 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 16:14:02 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
	return ;
}

template<typename T>
T	min(T const &a, T const &b)
{
	return ((a < b) ? a : b);
}

template<typename T>
T	max(T const &a, T const &b)
{
	return ((a > b) ? a : b);
}

#endif