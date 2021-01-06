/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 15:37:01 by bdekonin      ########   odam.nl         */
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