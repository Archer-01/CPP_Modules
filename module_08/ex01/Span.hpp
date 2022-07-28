/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:13:10 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 12:09:06 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <stdexcept>
# include <algorithm>

class Span
{
	private:
		std::vector<int>	_arr;
		unsigned int const	_max_size;

		Span(void);

	public:
		Span(unsigned int N);
		Span(Span const &src);
		~Span(void);
		Span	&operator=(Span const &rhs);
		void	addNumber(int num);
		int		shortestSpan(void) const;
		int		longestSpan(void) const;
};

#endif