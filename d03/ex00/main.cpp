/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 19:18:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/04 21:36:48 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
{
	FragTrap woo("woo");
	std::string psycho = "psycho";

	// woo.status();

	woo.meleeAttack(psycho);
	woo.rangedAttack(psycho);
	woo.vaulthunter_dot_exe(psycho);

	woo.takeDamage(75);
	woo.beRepaired(25);

	woo.takeDamage(75);

	woo.beRepaired(25);
	woo.beRepaired(100);

	return 0;
}