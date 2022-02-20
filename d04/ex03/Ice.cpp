/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/19 17:10:09 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:44:27 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/* Constructor */
Ice::Ice()
: AMateria("Ice")
{
}
Ice::Ice(const Ice &e)
{
	*this = e;
}

/* Operation overload = */
Ice &Ice::operator = (const Ice &e)
{
	this->_type = e._type;
	return *this;
}

/* Methods */
AMateria *Ice::clone() const
{
	return (new Ice());
}
void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}