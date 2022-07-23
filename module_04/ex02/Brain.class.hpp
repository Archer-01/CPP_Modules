/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 13:26:52 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 13:32:15 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP

# include <string>
# include <cstdlib>
# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];

	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		Brain	&operator=(Brain const &rhs);
};

#endif