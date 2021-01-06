/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 14:37:08 by bdekonin      ########   odam.nl         */
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