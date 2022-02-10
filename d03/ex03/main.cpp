/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:03:08 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include <iostream>

#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"

std::string returncolor(std::string input)
{
	return (RED + input + RESET);
}

int main(void)
{
	DiamondTrap	cp(returncolor("Lars"));

	cp.whoAmI();
	cp.guardGate();
	cp.highFivesGuys();

	cp.attack(returncolor("Bob"));
	cp.takeDamage(50);
	cp.beRepaired(25);
	cp.takeDamage(50);
	cp.attack(returncolor("Kees"));
	cp.beRepaired(25);
	cp.attack(returncolor("Rowan"));
	cp.takeDamage(50);
	cp.attack(returncolor("Luke"));
}
