/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:57:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:43:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

/* Constructor */
HumanB::HumanB(std::string name)
: _name(name) { }

/* Destructor */
HumanB::~HumanB() { }

/* Methods */
void HumanB::attack() {
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}