/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 14:19:53 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/01 14:49:35 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/* Constructor */
Data::Data()
: num(0)
{
	std::cout << "Default Constructor called" << std::endl;
}
Data::Data(int num)
: num(num)
{
	std::cout << "Constructor with parameter called" << std::endl;
}

/* Copy Constructor */
Data::Data(const Data &other)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = other;
}

/* Destructor */
Data::~Data()
{
	std::cout << "Destructor called" << std::endl;
}

/* Operation Overload = */
Data& Data::operator=(const Data& other)
{
	std::cout << "Assignment operator called" << std::endl;
	this->num = other.num;
	return (*this);
}