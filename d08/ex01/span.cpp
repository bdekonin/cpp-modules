/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/07 12:15:16 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/07 12:51:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

/* Constructor  */
Span::Span(int n)
: _n(n)
{
}

/* Destructor */
Span::~Span()
{
}

/* Copy constructor */
Span::Span(const Span &e)
{
	this->_n = e._n;
	this->_numbers = e._numbers;
}

/* Operation overload = */
Span &Span::operator=(const Span &e)
{
	this->_n = e._n;
	this->_numbers = e._numbers;
	return (*this);
}

/* Exceptions */
const char *Span::ShortSpanException::what() const throw()
{
	return "ShortSpanException";
}
const char *Span::LongSpanException::what() const throw()
{
	return "LongSpanException";
}
const char *Span::FullVector::what() const throw()
{
	return "Vector is Full";
}

// Methods
void Span::addNumber(int n)
{
	if (this->_numbers.size() >= (size_t)this->_n)
		throw FullVector();
	this->_numbers.push_back(n);
}

int Span::shortestSpan(void)
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
int Span::longestSpan(void)
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
