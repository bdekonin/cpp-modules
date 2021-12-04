/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 13:18:53 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 100;
	this->_energyPointsMax = 100;
	this->_level = 1;
	this->_name = "";
	this->_meleeDamageAttack = 30;
	this->_rangeDamageAttack = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap: " << this->_name << " Starting up" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	this->_hitPoints = 100;
	this->_hitPointsMax = 100;
	this->_energyPoints = 100;
	this->_energyPointsMax = 100;
	this->_level = 1;
	this->_name = name;
	this->_meleeDamageAttack = 30;
	this->_rangeDamageAttack = 20;
	this->_armorDamageReduction = 5;
	std::cout << "FragTrap: " << this->_name << " Starting up" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	*this = obj;
	std::cout << "FragTrap: " << this->_name << "Starting up" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: " << this->_name << " got killed" << std::endl;
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap: " << this->_name << " attacks ";
	std::cout << target << " at range causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap: " << this->_name << " attacks ";
	std::cout << target << " with melee causing " << this->_meleeDamageAttack;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::status(void)
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

void FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap: " << this->_name << " took damage" << std::endl;
	if (this->_hitPoints < amount - this->_armorDamageReduction)
	{
		this->_hitPoints = 0;
		return ;
	}
	this->_hitPoints -= amount - this->_armorDamageReduction;
}

void FragTrap:: beRepaired(unsigned int amount)
{
	if (this->_hitPointsMax < this->_hitPoints + amount)
		this->_hitPoints = this->_hitPointsMax;
	else
		this->_hitPoints += amount;
		std::cout << "FragTrap: " << this->_name << " healed" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	const int		energyCost = 25;
	const int		skillsNum = 5;
	const int		skillDamageBase = 12;
	int 			randomNum;
	std::string		skills[] = {"fork", 
								"flour", 
								"clock", 
								"noodles", 
								"god"};

	if (this->_energyPoints > energyCost)
	{
		std::srand(time(NULL));
    	randomNum = std::rand() % skillsNum;
		std::cout << "FragTrap: "<< this->_name 
			<< " attacks " << target 
			<< " by " << skills[randomNum]
			<< ", causing " << (randomNum + 1) * skillDamageBase
			<< " points of damage!" << std::endl;
		return ;
	}
	std::cout << "FragTrap: out of energy";
}