/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 19:18:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 16:35:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap foo("foo");
	FragTrap woo("woo");
	ScavTrap hoo("hoo");
	std::string psycho = "psycho";

	foo.status();
	//attack
	foo.meleeAttack(psycho);
	foo.rangedAttack(psycho);
	//take damage
	foo.takeDamage(10);
	//should be dead, can't make anymore move
	foo.meleeAttack(psycho);

	woo.status();
	//attack
	woo.meleeAttack(psycho);
	woo.rangedAttack(psycho);
	woo.vaulthunter_dot_exe(psycho);
	//take damage
	woo.takeDamage(10);
	//repair
	woo.beRepaired(100);
	//take lethal damage
	woo.takeDamage(300);
	//should be dead, can't make anymore move
	woo.meleeAttack(psycho);

	hoo.status();	
	//attack
	hoo.meleeAttack(psycho);
	hoo.rangedAttack(psycho);
	hoo.challengeNewcomer();
	//take damage
	hoo.takeDamage(10);
	//repair
	hoo.beRepaired(100);
	//take lethal damage
	hoo.takeDamage(300);
	//should be dead, can't make anymore move
	hoo.meleeAttack(psycho);

	return 0;
}