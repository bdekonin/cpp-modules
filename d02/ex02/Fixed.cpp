/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:55:32 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/23 11:23:36 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/* Constructor  */
Fixed::Fixed()
: _fixedPointValue(0)
{
	// std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const int n)
: _fixedPointValue(n * 256)
{
	// std::cout << "Int constructor called" << std::endl;
}
Fixed::Fixed(const float n)
: _fixedPointValue(roundf(n * 256))
{
	// std::cout << "Float constructor called" << std::endl;
}

/* Destructor */
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/* Copy constructor */
Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

/* Operation overload = */
Fixed &Fixed::operator=(const Fixed &f) 
{
	// std::cout << "Copy Assignment operator called" << std::endl;
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
Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	std::cout << "min member function called" << std::endl;
	return (a < b) ? a : b;
}
const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	std::cout << "min const member function called" << std::endl;
	return (a < b) ? a : b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	std::cout << "max member function called" << std::endl;
	return (a > b) ? a : b;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	std::cout << "max const member function called" << std::endl;
	return (a > b) ? a : b;
}

/* Operation overloaders */
bool Fixed::operator>(const Fixed &cmp) const
{
	return (this->_fixedPointValue > cmp._fixedPointValue);
}
bool Fixed::operator<(const Fixed &cmp) const
{
	return (this->_fixedPointValue < cmp._fixedPointValue);
}
bool Fixed::operator>=(const Fixed &cmp) const
{
	return (this->_fixedPointValue >= cmp._fixedPointValue);
}
bool Fixed::operator<=(const Fixed &cmp) const
{
	return (this->_fixedPointValue <= cmp._fixedPointValue);
}
bool Fixed::operator==(const Fixed &cmp) const
{
	return (this->_fixedPointValue == cmp._fixedPointValue);
}
bool Fixed::operator!=(const Fixed &cmp) const
{
	return (this->_fixedPointValue != cmp._fixedPointValue);
}

Fixed Fixed::operator+(const Fixed &cmp) const
{
	return (Fixed(this->toFloat() + cmp.toFloat()));
}
Fixed Fixed::operator-(const Fixed &cmp) const
{
	return(Fixed(this->toFloat() - cmp.toFloat()));
}
Fixed	Fixed::operator * (const Fixed& cmp) const // ?
{
	return(Fixed(this->toFloat() * cmp.toFloat()));
}
Fixed Fixed::operator/(const Fixed &cmp) const
{
	return(Fixed(this->toFloat() / cmp.toFloat()));
}

Fixed &Fixed::operator++(void)
{
	this->_fixedPointValue++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue++;
	return (tmp);
}
Fixed &Fixed::operator--(void)
{
	this->_fixedPointValue--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	this->_fixedPointValue--;
	return (tmp);
}

/* Overload << */
std::ostream &operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}