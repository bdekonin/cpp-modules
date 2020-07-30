/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:40:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 16:27:08 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weaponClass) : m_weapon(weaponClass)
{
	this->name = name;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his ";
	std::cout << this->m_weapon.getType() << std::endl;
}