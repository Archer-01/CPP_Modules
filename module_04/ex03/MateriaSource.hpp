/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:19:21 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:10:29 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"
# include <iostream>
# include <cstring>
# include <string>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria		*_materias[4];
		unsigned short	_materia_count;

	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);
		MateriaSource		&operator=(MateriaSource const &rhs);
		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(std::string const &type) const;
};

#endif