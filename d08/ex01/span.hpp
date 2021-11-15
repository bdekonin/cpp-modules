/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/03 14:37:51 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/11/15 11:41:20 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>
# include <iostream>
# include <exception>

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
			Span(const Span &e)
			{
				this->_n = e._n;
				this->_numbers = e._numbers;
			}

		/* Operation overload = */
			Span &operator=(const Span &e)
			{
				this->_n = e._n;
				this->_numbers = e._numbers;
				return (*this);
			}

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
				
				this->_numbers.insert(this->_numbers.end(), begin, end);
			}
			template<typename T>
			void addNumber(T &vec)
			{
				this->addNumber(vec.begin(), vec.end());
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
				
				return (*max - *min);
			}

			void print(void)
			{
				std::vector<int> v = this->_numbers;
				std::string test;
				for (int i = 0; i < (int)v.size(); i++)
					std::cout << "[" << i << "] " << v[i] << std::endl;
			}
		
		private:
			int	_n;
			std::vector<int> _numbers;
};

#endif // SPAN_HPP