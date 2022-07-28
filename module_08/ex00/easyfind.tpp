/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:04:56 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 10:35:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
typename T::const_iterator	easyfind(T const &container, int value)
{
	typename T::const_iterator	it;

	it = std::find(container.cbegin(), container.cend(), value);
	if (it == container.cend())
	{
		throw std::runtime_error("Value not found");
	}
	return (it);
}
