/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:12:47 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:53:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP

# include "AAnimal.class.hpp"
# include "Brain.class.hpp"

class Dog : public AAnimal
{
	private:
		Brain	*_brain;

	public:
		Dog(void);
		Dog(Dog const &dog);
		virtual ~Dog(void);
		Dog	&operator=(Dog const &dog);
		virtual void	makeSound(void) const;
};

#endif