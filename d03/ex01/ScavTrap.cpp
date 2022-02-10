/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 15:12:36 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:24:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* Constructor */
ScavTrap::ScavTrap()
{
	std::cout << "🛠️ ScavTrap: Constructor called." << std::endl;
	this->_name = "ScavTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}
ScavTrap::ScavTrap(std::string name)
{
	std::cout << "🛠️ ScavTrap: Constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

/* Destructor */
ScavTrap::~ScavTrap()
{
	std::cout << "💣 ScavTrap: Destructor called." << std::endl;
}

/* Copy constructor */
ScavTrap::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
	std::cout << "🛠️ ScavTrap: Copy Constructor called." << std::endl;
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
void	ScavTrap::attack(const std::string &target)
{
	if (this->_hitPoints)
	{
		if (this->_energyPoints)
		{
			this->_energyPoints--;
			std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		}
		else
			std::cout << "ScavTrap " << this->_name << " is tired." << std::endl;
	}
	else
		std::cout << "ScavTrap " << this->_name << " is dead." << std::endl;
}
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is guarding the gate!" << std::endl;
}