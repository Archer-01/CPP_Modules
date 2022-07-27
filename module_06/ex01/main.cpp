/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:15:41 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 07:21:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int	main(void)
{
	Data		data = {.str = "Hello World", .num = 42};
	uintptr_t	raw;
	Data		*ptr;

	raw = serialize(&data);
	std::cout << "Serialized: " << raw << std::endl;
	ptr = deserialize(raw);
	std::cout << "Deserialized: " << ptr->str << " / " << ptr->num << std::endl;
	return (0);
}
