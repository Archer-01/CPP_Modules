/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:52:03 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 14:53:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_CLASS_HPP
# define AANIMAL_CLASS_HPP

# include <string>
# include <iostream>

class AAnimal
{
	protected:
		std::string	_type;

	public:
		AAnimal(void);
		AAnimal(std::string const &type);
		AAnimal(AAnimal const &AAnimal);
		virtual ~AAnimal(void);
		AAnimal	&operator=(AAnimal const &AAnimal);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
};

#endif