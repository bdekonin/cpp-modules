/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:04:59 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"

std::string returncolor(std::string input)
{
	return (RED + input + RESET);
}

int main(void)
{
	FragTrap	cp(returncolor("Boris"));

	cp.attack(returncolor("Sanne"));
	cp.takeDamage(50);
	cp.beRepaired(25);
	cp.takeDamage(50);
	cp.attack(returncolor("Sophie"));
	cp.beRepaired(25);
	cp.highFivesGuys();
	cp.attack(returncolor("Eva"));
	cp.takeDamage(50);
	cp.attack(returncolor("Aniek"));
}
