/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:38:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/12 15:21:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <iomanip>
// # include <ctime>
# include <cstdlib>
# include <string>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array(void) : _n(0), _array(NULL)
		{
		}
		Array(unsigned int n) : _n(n), _array(new T[n])
		{
		}
		Array(Array const &obj) : _n(0), _array(NULL)
		{
			*this = obj;
		}
		~Array(void)
		{
			delete [] this->_array;
		}
	
		Array<T>	&operator=(Array const &rhs)
		{
			this->_n = rhs._n;
			delete this->_array;
			this->_array = new T[rhs._n];
			for (unsigned int i = 0; i < this->size(); i++)
				this->_array[i] = rhs._array[i];
			return *this;
		}
	
		T	&operator[](unsigned int i)
		{
			if (i >= this->_n)
				std::out_of_range();
				// throw std::exception();
			return (this->_array[i]);
		}
	
		unsigned int	size(void) const
		{
			return this->_n;
		}
	
	private:
		unsigned int	_n;
		T				*_array;
};

#endif // ARRAY_HPP
