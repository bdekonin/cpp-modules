/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/02 12:33:36 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/03 10:04:51 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>

template <typename T>
class Array
{
	public:
		/* Constructor  */
		Array()
		: _n(0), _array(nullptr)
		{
		}
		Array(unsigned int n)
		: _n(n), _array(new T[n])
		{
		}

		/* Copy constructor */
		Array(const Array &e)
		: _n(e.size()), _array(new T[e.size()])
		{
			for (unsigned int i = 0; i < e.size(); i++)
				this->_array[i] = e._array[i];
		}
		
		/* Destructor */
		~Array()
		{
			delete [] this->_array;
		}

		/* Operation overload */
		Array<T> &operator=(const Array &e)
		{
			this->_n = e._n;
			delete this->_array;
			for (unsigned int i = 0; i < this->size(); i++)
				this->_array[i] = e._array[i];
			return *this;
		}
		// T &operator[](unsigned int i)
		// {
		// 	if (i >= this->_n)
		// 		throw std::exception();
		// 	return (this->_array[i]);
		// }
		T &operator[](unsigned int i) const
		{
			if (i >= this->_n)
				throw std::exception();
			return (this->_array[i]);
		}
		
		// Methods
		unsigned int	size(void) const
		{
			return this->_n;
		}
	private:
		unsigned int	_n;
		T				*_array;
};

#endif // ARRAY_HPP