/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 14:46:50 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"

std::string returncolor(std::string input)
{
	return (RED + input + RESET);
}

int main(void)
{
	ScavTrap	scav(returncolor("Mithras"));

	scav.attack(returncolor("Goblin"));
	scav.takeDamage(50);
	scav.beRepaired(25);
	scav.takeDamage(50);
	scav.attack(returncolor("Oger"));
	scav.beRepaired(25);
	scav.guardGate();
	scav.attack(returncolor("Bert"));
	scav.takeDamage(50);
	scav.attack(returncolor("Kees"));
}