/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhamza <hhamza@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:10:30 by hhamza            #+#    #+#             */
/*   Updated: 2022/07/27 18:20:12 by hhamza           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

# include <stdexcept>
# include <iostream>
# include <cstdlib>

template<typename T>
class Array
{
	private:
		T		*_arr;
		size_t	_size;

	public:
		Array(void) : _arr(NULL), _size(0)
		{
			// Empty body
		}

		Array(unsigned int n) try : _size(n)
		{
			this->_arr = new T[n];
			bzero(this->_arr, n * sizeof(T));
		}
		catch (std::bad_alloc const &exception)
		{
			std::cerr << "Error: " << exception.what() << std::endl;
		}

		Array(Array const &src) try : _size(src._size)
		{
			this->_arr = new T[this->_size];
			for (size_t i = 0; i < this->_size; ++i)
			{
				this->_arr[i] = src._arr[i];
			}
		}
		catch (std::bad_alloc const &exception)
		{
			std::cerr << "Error: " << exception.what() << std::endl;
		}

		~Array(void)
		{
			delete [] this->_arr;
		}

		Array	&operator=(Array const &rhs)
		{
			this->_size = rhs._size;
			delete [] this->_arr;
			this->_arr = new T[this->_size];
			for (size_t i = 0; i < this->_size; ++i)
			{
				this->_arr[i] = rhs._arr[i];
			}
			return (*this);
		}

		T		&operator[](unsigned int index)
		{
			if (index >= this->_size)
			{
				throw std::runtime_error("Index out of range");
			}
			return (this->_arr[index]);
		}

		size_t	size(void) const
		{
			return (this->_size);
		}
};

#endif