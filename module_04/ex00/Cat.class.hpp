/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:13:50 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 11:22:52 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP

# include "Animal.class.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const &cat);
		virtual ~Cat(void);
		Cat	&operator=(Cat const &cat);
		virtual void	makeSound(void) const;
};

#endif