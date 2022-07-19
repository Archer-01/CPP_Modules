/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:39:58 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/19 07:09:50 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		static int const	_fraction_bits_count;
		int					_value;

	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		~Fixed(void);
		Fixed				&operator=(Fixed const &fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif