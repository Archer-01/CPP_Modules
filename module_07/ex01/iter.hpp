/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 16:20:30 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 16:52:08 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstddef>

template<typename T>
void	iter(T *arr, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; ++i)
	{
		f(arr[i]);
	}
	return ;
}

template<typename T>
void	iter(T *arr, size_t size, void (*f)(T &))
{
	for (size_t i = 0; i < size; ++i)
	{
		f(arr[i]);
	}
	return ;
}

#endif