/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:30:13 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 15:36:39 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
# define ICE_CLASS_HPP

#include "AMateria.class.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);
		Ice	&operator=(Ice const &rhs);
		virtual AMateria	*clone(void) const;
		// TODO: Implement me
		// virtual void		use(ICharacter &target);
};

#endif