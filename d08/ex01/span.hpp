/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/03 14:37:51 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/07 12:02:40 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>

// 3
// 8
// 1
// 2
// 3
class Span
{
	public:
		/* Constructor  */
		Span(int n)
		: _n(n)
		{
		}

		/* Destructor */
		~Span()
		{
		}

		/* Copy constructor */
		Span(const Span &e);

		/* Operation overload = */
		Span &operator=(const Span &e);

		/* Exceptions */
		class ShortSpanException : public std::exception
		{
			const char *what() const throw()
			{
				return "ShortSpanException";
			}
		};
		class LongSpanException : public std::exception
		{
			const char *what() const throw()
			{
				return "LongSpanException";
			}
		};
		class FullVector : public std::exception
		{
			const char *what() const throw()
			{
				return "Vector is Full";
			}
		};

		// Methods
		void addNumber(int n)
		{
			if (this->_numbers.size() >= (size_t)this->_n)
				throw FullVector();
			this->_numbers.push_back(n);
		}
		template<typename T>
		void addNumber(T begin, T end)
		{
			if (this->_numbers.size() >= (size_t)this->_n)
				throw FullVector();
			
			while (begin != end)
			{
				this->_numbers.push_back(*begin);
				begin++;
			}
		}
		template<typename T>
		void addNumber(T &vec)
		{
			if (this->_numbers.size() >= (size_t)this->_n)
				throw FullVector();
			
			for (typename T::iterator it = vec.begin(); it != vec.end(); it++)
				this->_numbers.push_back(*it);
		}
		int shortestSpan(void)
		{
			size_t size = this->_numbers.size();
			if (size <= 1)
				throw ShortSpanException(); // change to diff

			std::sort(this->_numbers.begin(), this->_numbers.end());

			size_t temp = (size_t)this->_numbers[1] - (size_t)this->_numbers[0];
			
			for (size_t i = 0; i < size; i++)
			{
				if (temp > (size_t)this->_numbers[i + 1] - (size_t)this->_numbers[i])
					temp = (size_t)this->_numbers[i + 1] - (size_t)this->_numbers[i];
			}
			return temp;
		}
		int longestSpan(void)
		{
			size_t size = this->_numbers.size();
			if (size <= 1)
				throw LongSpanException(); // change to diff

			std::vector<int>::iterator min;
			std::vector<int>::iterator max;

			min = min_element(this->_numbers.begin(), this->_numbers.end());
			max = max_element(this->_numbers.begin(), this->_numbers.end());
			
			return *max - *min;
		}
		void print(void)
		{
			std::vector<int> v = this->_numbers;
			for (int i = 0; i < (int)v.size(); i++)
				std::cout << "[" << i << "] "<< v[i] << std::endl;
		}
		int	_n;
		std::vector<int> _numbers;
};

#endif // SPAN_HPP