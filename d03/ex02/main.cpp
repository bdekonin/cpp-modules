/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 12:19:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int main(void)
{
	ScavTrap	scav("Jean-Michel");

	scav.attack("Bernadette");
	scav.takeDamage(50);
	scav.beRepaired(25);
	scav.takeDamage(50);
	scav.attack("Jean-Louis");
	scav.beRepaired(25);
	scav.guardGate();
	scav.attack("Fabrice");
	scav.takeDamage(50);
	scav.attack("Patrick");
}