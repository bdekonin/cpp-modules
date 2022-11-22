/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:32:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:22:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"      /* Red */
#define GREEN   "\033[32m"      /* Green */

/* Constructor  */
ClapTrap::ClapTrap()
: _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "🛠️ ClapTrap: Constructor Called." << std::endl;
}
ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "🛠️ ClapTrap: Constructor Called." << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "🛠️ ClapTrap: Constructor Called." << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "💣 ClapTrap: Destructor Called." << std::endl;
}

/* Operation overload = */
ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}


// Methods
void ClapTrap::attack(std::string const &target)
{
	if (this->_hitPoints)
	{
		if (this->_energyPoints)
		{
			this->_energyPoints--;
			std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " is tired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " tooks " << amount << " points of damage." << std::endl;
		if (this->_hitPoints > (int)amount)
			this->_hitPoints -= amount;
		else
		{
			this->_hitPoints = 0;
			std::cout << "ClapTrap " << this->_name << " is now dead." << std::endl;
		}
	}
	else
		std::cout << "ClapTrap " << this->_name << " is already dead." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints)
	{
		if (this->_energyPoints)
		{
			this->_energyPoints--;
			this->_hitPoints += amount;
			std::cout << "ClapTrap " << this->_name << " is repared for " << amount << " points of damage." << std::endl;
		}
		else
			std::cout << "ClapTrap " << this->_name << " is tired." << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
}
