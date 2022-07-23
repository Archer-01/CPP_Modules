/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:08:31 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 18:32:33 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>

class ICharacter;
# include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(void);
		AMateria(std::string const &type);
		AMateria(AMateria const &src);
		virtual ~AMateria(void);
		AMateria	&operator=(AMateria const &rhs);
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);
};

#endif