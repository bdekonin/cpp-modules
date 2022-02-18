/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 16:02:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 16:10:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/* Constructor */
WrongAnimal::WrongAnimal()
{
	this->_type = "WrongAnimal";
	std::cout << this->_type << " has been born." << std::endl;
}
WrongAnimal::WrongAnimal(std::string type)
{
	this->_type = type;
	std::cout << this->_type << " has been born." << std::endl;
}

/* Destructor */
WrongAnimal::~WrongAnimal()
{
	std::cout << this->_type << " has died." << std::endl;
}

/* Copy constructor */
WrongAnimal::WrongAnimal(const WrongAnimal &e)
{
	this->_type = e._type;
	std::cout << this->_type << " has been born." << std::endl;
}

/* Operation overload = */
WrongAnimal& WrongAnimal::operator = (const WrongAnimal &e)
{
	this->_type = e._type;
	return *this;
}

/* Methods */
void WrongAnimal::makeSound() const
{
	std::cout << "I am an " << this->_type << " .... " << std::endl;
}