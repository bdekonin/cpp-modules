/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 15:47:53 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 16:02:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructor */
Dog::Dog()
: Animal("Dog")
{
}

/* Destructor */
Dog::~Dog()
{
}

/* Copy constructor */
Dog::Dog(const Dog &e)
: Animal(e)
{
}

/* Operation overload = */
Dog &Dog::operator = (const Dog &e)
{
	this->_type = e._type;
	return *this;
}
