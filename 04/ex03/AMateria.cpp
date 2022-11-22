/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/19 16:45:17 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:32:35 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/* Constructors */
AMateria::AMateria()
: _type("")
{
}
AMateria::AMateria(std::string const &type)
: _type(type)
{
}

/* Destructor */
AMateria::~AMateria()
{
}

/* Copy Constructor */
AMateria::AMateria(const AMateria &e)
{
	*this = e;
}

/* Operation overload = */
AMateria &AMateria::operator = (const AMateria &e)
{
	this->_type = e._type;
	return *this;
}

/* Methods */
std::string const &AMateria::getType() const
{
	return this->_type;
}
void AMateria::use(ICharacter &target)
{
	std::cout << "AMateria::use()" << target.getName() << std::endl;
}