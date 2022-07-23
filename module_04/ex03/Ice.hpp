/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 18:09:27 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 18:09:37 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

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