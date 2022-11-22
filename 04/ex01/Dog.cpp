/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 18:18:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 18:45:40 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/* Constructors */
Dog::Dog()
: Animal("Dog")
{
}

/* Destructor */
Dog::~Dog()
{
}

/* Copy Constructor */
Dog::Dog(const Dog &e)
: Animal(e)
{
	*this = e;
}

/* Operation overload = */
Dog& Dog::operator = (const Dog &e)
{
	this->_type = e._type;
	this->_brain = e._brain;
	return *this;
}
