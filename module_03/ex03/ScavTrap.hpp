/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:59:19 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/22 07:48:25 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
	protected:
		ScavTrap(void);
		ScavTrap(ScavTrap const & src);
		ScavTrap	&operator=(ScavTrap const & scavtrap);

	public:
		ScavTrap(std::string name);
		~ScavTrap(void);
		void		attack(std::string const &target);
		void		guardGate(void) const;
};

#endif