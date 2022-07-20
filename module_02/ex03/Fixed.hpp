/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:39:58 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/19 17:30:41 by hhamza           ###   ########.fr       */
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
		bool				operator==(Fixed const &fixed) const;
		bool				operator!=(Fixed const &fixed) const;
		bool				operator>(Fixed const &fixed) const;
		bool				operator<(Fixed const &fixed) const;
		bool				operator>=(Fixed const &fixed) const;
		bool				operator<=(Fixed const &fixed) const;
		Fixed				operator+(Fixed const &fixed) const;
		Fixed				operator-(Fixed const &fixed) const;
		Fixed				operator*(Fixed const &fixed) const;
		Fixed				operator/(Fixed const &fixed) const;
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);
		static Fixed		&min(Fixed &fixed1, Fixed &fixed2);
		static Fixed		&min(Fixed const &fixed1, Fixed const &fixed2);
		static Fixed		&max(Fixed &fixed1, Fixed &fixed2);
		static Fixed		&max(Fixed const &fixed1, Fixed const &fixed2);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif