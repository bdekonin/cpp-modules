/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:45:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:54:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/* Constructor  */
Weapon::Weapon(std::string type) : _type(type) { }

/* Destructor */
Weapon::~Weapon() { }

// Methods
std::string const &Weapon::getType() const
{
	return (this->_type);
}
void Weapon::setType(std::string type)
{
	this->_type = type;
}

