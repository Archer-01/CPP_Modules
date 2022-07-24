/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 21:16:12 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/24 09:10:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource(void);
		virtual void		learnMateria(AMateria *m) = 0;
		virtual AMateria	*createMateria(std::string const &type) const = 0;
};

#endif