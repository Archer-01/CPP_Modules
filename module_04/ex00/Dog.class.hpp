/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:12:47 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 11:22:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "Animal.class.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		Dog(Dog const &dog);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &dog);
		virtual void	makeSound(void) const;
};

#endif