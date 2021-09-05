/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/03 14:37:51 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/04 12:28:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>

class span
{
	public:
		/* Constructor  */
		span(int n)
		: _n(n)
		{
		}

		/* Destructor */
		~span()
		{
		}

		/* Copy constructor */
		span(const span &e);

		/* Operation overload = */
		span &operator=(const span &e);

		// Methods
		void addNumber(int n)
		{
			if (this->_numbers.size() >= (int)this->_n)
				throw std::exception();
			this->_numbers.push_back(n);
		}
		int shortestSpan(void)
		{
			int temp = 4;

			for (size_t i = 0; i < this->_numbers.size(); i++)
			{
				min_element(this->_numbers.begin(), this->_numbers.end());
			}
			return temp;
		}
	private:
		int	_n;
		std::vector<int> _numbers;
};

#endif // SPAN_HPP