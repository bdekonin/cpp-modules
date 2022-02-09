/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 15:12:36 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 13:46:08 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

/* Constructor */
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap: Constructor called." << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap: Constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap: Destructor called." << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(const ScavTrap&)
{
	std::cout << "ScavTrap: Copy Constructor called." << std::endl;
}

/* Operation overload = */
ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

/* Methods */
void ScavTrap::guardGate()
{
	std::cout << this->_name << " is guarding the gate!" << std::endl;
}