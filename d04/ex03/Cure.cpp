/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/19 17:10:09 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:44:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/* Constructor */
Cure::Cure()
: AMateria("Cure")
{
}
Cure::Cure(const Cure &e)
{
	*this = e;
}

/* Operation overload = */
Cure &Cure::operator = (const Cure &e)
{
	this->_type = e._type;
	return *this;
}

/* Methods */
AMateria *Cure::clone() const
{
	return (new Cure());
}
void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << " *" << std::endl;
}