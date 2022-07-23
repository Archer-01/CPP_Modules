/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 11:35:06 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/23 12:46:30 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_HPP
# define WRONG_CAT_HPP

# include "WrongAnimal.class.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(WrongCat const &wrong_cat);
		virtual ~WrongCat(void);
		WrongCat	&operator=(WrongCat const &wrong_cat);
		void		makeWrongSound(void) const;
};

#endif