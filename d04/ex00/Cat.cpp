/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 15:47:53 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 15:52:05 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructor */
Cat::Cat()
: Animal("Cat")
{
}

/* Destructor */
Cat::~Cat()
{
}

/* Copy constructor */
Cat::Cat(const Cat &e)
: Animal(e)
{
}

/* Operation overload = */
Cat &Cat::operator = (const Cat &e)
{
	this->_type = e._type;
	return *this;
}
