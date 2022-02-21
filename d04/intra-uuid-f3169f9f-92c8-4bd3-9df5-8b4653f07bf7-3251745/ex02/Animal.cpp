/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 15:32:14 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 15:34:52 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Animal.hpp"

/* Constructors  */
Animal::Animal()
{
	this->_type = "Animal";
	std::cout << this->_type << " has been born." << std::endl;
}
Animal::Animal(std::string type)
{
	this->_type = type;
	std::cout << this->_type << " has been born." << std::endl;
}

/* Destructor */
Animal::~Animal()
{
	std::cout << this->_type << " has died." << std::endl;
}

/* Copy constructor */
Animal::Animal(const Animal &e)
{
	this->_type = e._type;
	std::cout << this->_type << " has been born." << std::endl;
}

/* Operation overload = */
Animal& Animal::operator = (const Animal &e)
{
	this->_type = e._type;
	return *this;
}

/* Methods */
void Animal::makeSound() const
{
	std::cout << "I am an " << this->_type << " .... " << std::endl;
}