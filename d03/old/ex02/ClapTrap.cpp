/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:32:08 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/04 10:45:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 50;
	this->_energyPointsMax = 50;
	this->_level = 1;
	this->_name = "";
	this->_meleeDamageAttack = 20;
	this->_rangeDamageAttack = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ClapTrap: " << this->_name << " starting up" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	std::cout << "ClapTrap: " << this->_name << "starting up" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 50;
	this->_energyPointsMax = 50;
	this->_level = 1;
	this->_name = name;
	this->_meleeDamageAttack = 20;
	this->_rangeDamageAttack = 15;
	this->_armorDamageReduction = 3;
	std::cout << "ClapTrap: " << this->_name << " starting up" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: " << this->_name << " got killed" << std::endl;
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap: " << this->_name << " attacks ";
	std::cout << target << " at range causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap: " << this->_name << " attacks ";
	std::cout << target << " with melee causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::status(void)
{
	std::cout << "Hit Points: " << this->_hitPoints << std::endl;
	std::cout << "Max Hit Points: " << this->_hitPointsMax << std::endl;
	std::cout << "Energy Points: " << this->_energyPoints << std::endl;
	std::cout << "Max Energy Points: " << this->_energyPointsMax << std::endl;
	std::cout << "Level: " << this->_level << std::endl;
	std::cout << "Name: " << this->_name << std::endl;
	std::cout << "Melee Damage: " << this->_meleeDamageAttack << std::endl;
	std::cout << "Range Damage: " << this->_rangeDamageAttack << std::endl;
	std::cout << "Armor Reduction: " << this->_armorDamageReduction << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap: " << this->_name << " took damage" << std::endl;
	if (this->_hitPoints < amount - this->_armorDamageReduction)
	{
		this->_hitPoints = 0;
		return ;
	}
	this->_hitPoints -= amount - this->_armorDamageReduction;
}

void ClapTrap:: beRepaired(unsigned int amount)
{
	if (this->_hitPointsMax < this->_hitPoints + amount)
		this->_hitPoints = this->_hitPointsMax;
	else
		this->_hitPoints += amount;
	std::cout << "ClapTrap: " << this->_name << " healed" << std::endl;
}
