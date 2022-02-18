/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 18:18:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 18:56:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/* Constructors */
Cat::Cat()
: Animal("Cat")
{
}

/* Destructor */
Cat::~Cat()
{
}

/* Copy Constructor */
Cat::Cat(const Cat &e)
: Animal(e)
{
	*this = e;
}

/* Operation overload = */
Cat& Cat::operator = (const Cat &e)
{
	this->_type = e._type;
	this->_brain = e._brain;
	return *this;
}
