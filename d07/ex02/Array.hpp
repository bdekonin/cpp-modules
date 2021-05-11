/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:38:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/05/11 17:41:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <iostream>
# include <iomanip>
# include <ctime>
# include <cstdlib>
# include <string>

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
			delete [] _array;
		}
	
		Array<T>	&operator=(Array const &rhs)
		{
			_n = rhs._n;
			delete _array;
			_array = new T [rhs._n];
			for (unsigned int i = 0; i < _n; i++)
				_array[i] = rhs._array[i];
			return *this;
		}
	
		T	&operator[](unsigned int i)
		{
			if (i >= _n)
				throw std::exception();
			return (_array[i]);
		}
	
		unsigned int	size(void) const
		{
			return _n;
		}
	
	private:
		unsigned int	_n;
		T				*_array;
};

#endif // ARRAY_HPP
