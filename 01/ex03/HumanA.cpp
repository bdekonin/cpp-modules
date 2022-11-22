/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:55:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:42:45 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

/* Constructor */
HumanA::HumanA(std::string name, Weapon &weapon)
: _weapon(weapon), _name(name) { }

/* Destructor */
HumanA::~HumanA() { }

/* Methods */
void HumanA::attack() {
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}