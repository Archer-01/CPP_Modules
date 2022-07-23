/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:11:42 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 11:26:15 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP

# include <string>
# include <iostream>

class Animal
{
	protected:
		std::string	_type;

	public:
		Animal(void);
		Animal(std::string const &type);
		Animal(Animal const &animal);
		virtual ~Animal(void);
		Animal	&operator=(Animal const &animal);
		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif