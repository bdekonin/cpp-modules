/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:32:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/04 15:36:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

/* Constructor  */
ClapTrap::ClapTrap(std::string name)
: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap: " << this->_name << " starting up" << std::endl;
}

/* Copy constructor */
ClapTrap::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << "ClapTrap: " << this->_name << "starting up" << std::endl;
}

/* Destructor */
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap: " << this->_name << " got killed" << std::endl;
}


// Methods
void ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap: " << this->_name << " attacks " << target <<  ", causing " << this->_attackDamage << " points of damage!" <<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	if (this->_hitPoints < 0)
		this->_hitPoints = 0;	
}