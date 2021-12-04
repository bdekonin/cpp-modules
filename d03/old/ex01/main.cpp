/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 19:18:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 13:22:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap x("x");
	ScavTrap y("y");
	std::string psycho = "psycho";
	std::cout << std::endl;
	// x.status();

	x.meleeAttack(psycho);
	y.meleeAttack(psycho);
	std::cout << std::endl;
	
	x.rangedAttack(psycho);
	y.rangedAttack(psycho);
	std::cout << std::endl;

	x.vaulthunter_dot_exe(psycho);
	y.challengeNewcomer();
	std::cout << std::endl;
	
	x.takeDamage(75);
	y.takeDamage(75);
	std::cout << std::endl;
	
	x.beRepaired(25);
	y.beRepaired(25);
	std::cout << std::endl;

	x.takeDamage(75);
	y.takeDamage(75);
	std::cout << std::endl;

	x.beRepaired(25);
	y.beRepaired(25);
	std::cout << std::endl;
	
	x.beRepaired(100);
	y.beRepaired(100);
	std::cout << std::endl;
	
	return 0;
}