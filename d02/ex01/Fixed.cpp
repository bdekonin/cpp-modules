/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:55:32 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 17:47:37 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor  */
Fixed::Fixed()
: _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n)
: _fixedPointValue(n * 256)
{
	std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float n)
: _fixedPointValue(roundf(n * 256))
{
	std::cout << "Float constructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

/* Operation overload = */
Fixed &Fixed::operator=(const Fixed &f) 
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fixedPointValue = f._fixedPointValue;
	return (*this);	
}

/* Methods */
int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}
void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}
float Fixed::toFloat(void) const
{
	return (float)this->_fixedPointValue / 256;
}
int Fixed::toInt(void) const
{
	return this->_fixedPointValue / 256;
}

/* Overload << */
std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}