/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:14:20 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 21:23:52 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Cure.hpp"
# include "Ice.hpp"
# include <cstring>
# include <string>

class Character : public ICharacter
{
	private:
		AMateria		*_inventory[4];
		std::string		_name;
		unsigned short	_materia_count;

	public:
		Character(void);
		Character(std::string const &name);
		Character(Character const &src);
		~Character(void);
		Character	&operator=(Character const &rhs);
		virtual std::string	const	&getName(void) const;
		virtual void				equip(AMateria *m);
		virtual void				unequip(int idx);
		virtual void				use(int idx, ICharacter &target) const;
};

#endif