/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 13:18:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:01:44 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* Constructor  */
FragTrap::FragTrap()
{
	std::cout << "🛠️ FragTrap: Constructor called." << std::endl;
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}
FragTrap::FragTrap(std::string name)
{
	std::cout << "🛠️ FragTrap: Constructor called." << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

/* Destructor */
FragTrap::~FragTrap()
{
	std::cout << "💣 FragTrap: Destructor called." << std::endl;
	
}

/* Copy constructor */
FragTrap::FragTrap(const FragTrap& obj)
{
	*this = obj;
	std::cout << "🛠️ FragTrap: Copy constructor called." << std::endl;
}

/* Operation overload = */
FragTrap& FragTrap::operator = (const FragTrap& e)
{
	this->_name = e._name;
	this->_hitPoints = e._hitPoints;
	this->_energyPoints = e._energyPoints;
	this->_attackDamage = e._attackDamage;
	return (*this);
}

/* Methods */
void FragTrap::attack(std::string const &target)
{
	if (this->_hitPoints)
	{
		if (this->_energyPoints)
		{
			this->_energyPoints--;
			std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage." << std::endl;
		}
		else
			std::cout << "FragTrap " << this->_name << " is tired." << std::endl;
	}
	else
		std::cout << "FragTrap " << this->_name << " is dead." << std::endl;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap: High Fives Guys!" << std::endl;
}