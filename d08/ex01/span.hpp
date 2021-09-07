/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/03 14:37:51 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/07 12:52:45 by bdekonin      ########   odam.nl         */
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
		Span(int n);

		/* Destructor */
		~Span();

		/* Copy constructor */
		Span(const Span &e);

		/* Operation overload = */
		Span &operator=(const Span &e);

		/* Exceptions */
		class ShortSpanException : public std::exception
		{
			const char *what() const throw();
		};
		class LongSpanException : public std::exception
		{
			const char *what() const throw();
		};
		class FullVector : public std::exception
		{
			const char *what() const throw();
		};

		// Methods
		void addNumber(int n);
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
			this->addNumbers(vec.begin(), vec.end());
		}
		
		int shortestSpan(void);
		int longestSpan(void);
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