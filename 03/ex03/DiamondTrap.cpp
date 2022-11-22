/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 15:43:11 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:01:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/* Constructor  */
DiamondTrap::DiamondTrap()
{
	std::cout << "🛠️ DiamondTrap: Constructor Called." << std::endl;
	this->_name = "DiamondTrap_clap_name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	// Using attack() from ScavTrap
}
DiamondTrap::DiamondTrap(std::string name)
: ClapTrap(name + "_clap_name")
{
	std::cout << "🛠️ DiamondTrap: Constructor Called." << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_name = name;
	// Using attack() from ScavTrap
}

/* Destructor */
DiamondTrap::~DiamondTrap()
{
	std::cout << "💣 DiamondTrap: Destructor Called." << std::endl;
}

/* Copy constructor */
DiamondTrap::DiamondTrap(const DiamondTrap &obj)
{
	*this = obj;
	std::cout << "🛠️ DiamondTrap: Constructor Called." << std::endl;
}

/* Operation overload = */
DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return *this;
}

/* Methods */
void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << this->_name << " and his ClapTrap name is " << ClapTrap::_name << std::endl;
}