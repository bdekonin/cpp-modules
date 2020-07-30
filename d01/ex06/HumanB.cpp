/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:40:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 17:52:24 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << this->m_name << " attacks with his ";
	std::cout << this->m_weapon->getType() << std::endl;
}