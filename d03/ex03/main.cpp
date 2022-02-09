/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 17:45:39 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

int main(void)
{
	DiamondTrap	cp("Jean-Michel");

	cp.whoAmI();
	cp.guardGate();
	cp.highFivesGuys();

	// std::cout << "Hit Points : " << cp.getHitPoints() << " | Energy Points : " << cp.getEnergyPoints() << " | Attack Damage : " << cp.getAttackDamage() << std::endl;
	// cp.attack("Bernadette");
	// cp.takeDamage(50);
	// cp.beRepaired(25);
	// cp.takeDamage(50);
	// cp.attack("Jean-Louis");
	// cp.beRepaired(25);
	// cp.attack("Fabrice");
	// cp.takeDamage(50);
	// cp.attack("Patrick");
}
