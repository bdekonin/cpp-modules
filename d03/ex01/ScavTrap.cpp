/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 13:20:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
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
	std::cout << "ScavTrap: " << this->_name << " starting up" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
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
	std::cout << "ScavTrap: " << this->_name << " starting up" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &obj)
{
	*this = obj;
	std::cout << "ScavTrap: " << this->_name << "starting up" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: " << this->_name << " got killed" << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap: " << this->_name << " attacks ";
	std::cout << target << " at range causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap: " << this->_name << " attacks ";
	std::cout << target << " with melee causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::status(void)
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

void ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap: " << this->_name << " took damage" << std::endl;
	if (this->_hitPoints < amount - this->_armorDamageReduction)
	{
		this->_hitPoints = 0;
		return ;
	}
	this->_hitPoints -= amount - this->_armorDamageReduction;
}

void ScavTrap:: beRepaired(unsigned int amount)
{
	if (this->_hitPointsMax < this->_hitPoints + amount)
		this->_hitPoints = this->_hitPointsMax;
	else
		this->_hitPoints += amount;
	std::cout << "ScavTrap: " << this->_name << " healed" << std::endl;
}

void ScavTrap::challengeNewcomer(void)
{
	const int	energyCost = 5;
	const int	skillsNum = 5;	
	int			randomNum;
	std::string challenges[] = {"jump",
								"crouch",
								"laydown",
								"fight",
								"slap"};
	if (this->_energyPoints > energyCost)
	{
		std::srand(time(NULL));
    	randomNum = std::rand() % skillsNum;
		std::cout << "ClavTrap: " << this->_name << " chooses to "
		<< challenges[randomNum] << std::endl;
		return ;
	}
	std::cout << "out of energy";
}