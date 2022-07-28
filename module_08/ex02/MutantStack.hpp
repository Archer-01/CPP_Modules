/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:29:17 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 19:50:16 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);
		MutantStack	&operator=(MutantStack const &rhs);
		class iterator
		{
			private:
				T	*_ptr;

			public:
				iterator(void);
				iterator(T *ptr);
				iterator(iterator const &src);
				~iterator();
				iterator	&operator=(iterator const &rhs);
				iterator	operator++(void);
				iterator	operator++(int);
				iterator	operator--(void);
				iterator	operator--(int);
				bool		operator==(iterator const &rhs);
				bool		operator!=(iterator const &rhs);
				bool		operator<(iterator const &rhs);
				bool		operator>(iterator const &rhs);
				bool		operator<=(iterator const &rhs);
				bool		operator>=(iterator const &rhs);
				T			operator*(void);
		};

		iterator	begin(void);
		iterator	end(void);
};

# include "MutantStack.tpp"

#endif