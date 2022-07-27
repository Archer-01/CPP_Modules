/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 07:32:34 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 07:58:24 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	public:
		virtual ~Base(void);
};

class A : public Base
{
	// Empty body
};

class B : public Base
{
	// Empty body
};

class C : public Base
{
	// Empty body
};

#endif