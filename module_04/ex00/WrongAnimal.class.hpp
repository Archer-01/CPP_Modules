/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:28:14 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:46:06 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
	protected:
		std::string	_wrong_type;

	public:
		WrongAnimal(void);
		WrongAnimal(std::string const &wrong_type);
		WrongAnimal(WrongAnimal const &wrong_animal);
		virtual ~WrongAnimal(void);
		WrongAnimal	&operator=(WrongAnimal const &wrong_animal);
		std::string	getWrongType(void) const;
		void		makeWrongSound(void) const;
};

#endif