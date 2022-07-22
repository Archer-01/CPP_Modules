/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:18:18 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/22 07:48:57 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		FragTrap(void);
		FragTrap(FragTrap const &fragtrap);
		FragTrap	&operator=(FragTrap const &fragtrap);

	public:
		FragTrap(std::string name);
		~FragTrap(void);
		void		highFivesGuys(void) const;
};

#endif