/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:16:36 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 13:50:18 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor  */
Fixed::Fixed()
: _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/* Copy Constructor */
Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

/* Operation overload = */
Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy Assignment operator called" << std::endl;
	this->_fixedPointValue = fixed._fixedPointValue;
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
