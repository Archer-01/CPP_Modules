/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 19:28:15 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/22 07:50:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;

		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &src);
		DiamondTrap &operator=(const DiamondTrap &rhs);

	public:
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		void	whoAmI(void) const;

		using ScavTrap::attack;
};

#endif