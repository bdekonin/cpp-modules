/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:32:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 13:46:40 by bdekonin      ########   odam.nl         */
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
	std::cout << "ClapTrap: Constructor Called." << std::endl;
}
ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: Constructor Called." << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap: Constructor Called." << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: Destructor Called." << std::endl;
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
	if (this->_hitPoints < 0)
	{
		std::cout << this->_name << " has 0 hitpoints!" << std::endl;
		return ;
	}
	if (this->_energyPoints < 0)
	{
		std::cout << this->_name << " has 0 energy points!" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name << " suffered with " << amount << " damage and now has ";
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
	{
		std::cout << "died!" << std::endl;
		this->_hitPoints = 0;
	}
	else
		std::cout << this->_hitPoints << " hitpoints left!" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints < 0)
	{
		std::cout << this->_name << " has 0 energy points!" << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout << this->_name << " got repaired with " << amount << " health and now has " << this->_hitPoints << " health!" <<std::endl;
}