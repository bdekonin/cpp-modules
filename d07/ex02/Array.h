/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:38:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/02 12:33:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <string>
# include <stdexcept>

template <typename T>
class Array
{
	public:
		Array(void)
		: _n(0), _array(NULL)
		{
		}
		Array(unsigned int n)
		: _n(n), _array(new T[n])
		{
		}
		Array(Array const &obj)
		: _n(0), _array(NULL)
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
			if (this->size() > 3)
				this->_array[2] = rhs._array[0];
			return *this;
		}
	
		T	&operator[](unsigned int i)
		{
			if (i >= this->_n)
				throw std::exception();
				// throw std::out_of_range();
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
