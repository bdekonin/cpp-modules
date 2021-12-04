/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 17:47:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 17:48:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hitPoints = 60;
	this->_hitPointsMax = 60;
	this->_energyPoints = 120;
	this->_energyPointsMax = 120;
	this->_level = 1;
	this->_name = "";
	this->_meleeDamageAttack = 60;
	this->_rangeDamageAttack = 5;
	this->_armorDamageReduction = 0;
	std::cout << "ClapTrap: " << this->_name << " starting up" << std::endl;
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

ClapTrap::ClapTrap(ClapTrap const &obj)
{
	*this = obj;
	std::cout << "ClapTrap: " << this->_name << "starting up" << std::endl;
}