/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:17:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

#define RESET  "\x1B[0m"
#define RED  "\x1B[31m"

std::string returncolor(std::string input)
{
	return (RED + input + RESET);
}

int main(void)
{
	ClapTrap	cp(returncolor("Faruk"));

	cp.attack(returncolor("Bert"));
	cp.takeDamage(5);
	cp.beRepaired(5);
	cp.takeDamage(8);
	cp.attack(returncolor("Mithras"));
	cp.beRepaired(1);
	cp.beRepaired(1);
	cp.beRepaired(1);
	cp.attack("Ferbert");
	cp.takeDamage(4);
	cp.beRepaired(1);
	cp.beRepaired(1);
	// cp.beRepaired(1); // uncomment to see ClapTrap tired
	// cp.takeDamage(3); // uncomment to see ClapTrap dead
	cp.attack("Jan");
}