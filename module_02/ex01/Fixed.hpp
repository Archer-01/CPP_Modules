/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:39:58 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/19 14:14:15 by hhamza           ###   ########.fr       */
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
		void				round(float fixed_float);

	public:
		Fixed(void);
		Fixed(Fixed const &fixed);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed(void);
		Fixed				&operator=(Fixed const &fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif