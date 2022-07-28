/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:53:06 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/28 19:48:44 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	// Empty body
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{
	// Empty body
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	// Empty body
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &rhs)
{
	if (this != &rhs)
	{
		*this = rhs;
	}
	return (*this);
}

template<typename T>
MutantStack<T>::iterator::iterator(void) : _ptr(NULL)
{
	// Empty body
}

template<typename T>
MutantStack<T>::iterator::iterator(T *ptr) : _ptr(ptr)
{
	// Empty body
}

template<typename T>
MutantStack<T>::iterator::iterator(iterator const &src) : _ptr(src._ptr)
{
	// Empty body
}

template<typename T>
MutantStack<T>::iterator::~iterator(void)
{
	// Empty body
}

template<typename T>
typename MutantStack<T>::iterator	&MutantStack<T>::iterator::operator=( \
	typename MutantStack<T>::iterator const &rhs)
{
	if (this != &rhs)
	{
		this->_ptr = rhs._ptr;
	}
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(void)
{
	++(this->_ptr);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator++(int)
{
	typename MutantStack<T>::iterator	tmp = *this;

	this->operator++();
	return (tmp);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(void)
{
	--(this->_ptr);
	return (*this);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::iterator::operator--(int)
{
	typename MutantStack<T>::iterator	tmp = *this;

	this->operator--();
	return (tmp);
}

template<typename T>
bool	MutantStack<T>::iterator::operator==( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr == rhs._ptr);
}

template<typename T>
bool	MutantStack<T>::iterator::operator!=( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr != rhs._ptr);
}

template<typename T>
bool	MutantStack<T>::iterator::operator<( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr < rhs._ptr);
}

template<typename T>
bool	MutantStack<T>::iterator::operator>( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr > rhs._ptr);
}

template<typename T>
bool	MutantStack<T>::iterator::operator<=( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr <= rhs._ptr);
}

template<typename T>
bool	MutantStack<T>::iterator::operator>=( \
	typename MutantStack<T>::iterator const &rhs)
{
	return (this->_ptr >= rhs._ptr);
}

template<typename T>
T		MutantStack<T>::iterator::operator*(void)
{
	return (*this->_ptr);
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::begin(void)
{
	return (typename MutantStack<T>::iterator(&this->top() - this->size() + 1));
}

template<typename T>
typename MutantStack<T>::iterator	MutantStack<T>::end(void)
{
	return (typename MutantStack<T>::iterator(&this->top() + 1));
}
