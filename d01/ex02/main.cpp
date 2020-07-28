/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:39:14 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 14:37:28 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main(void)
{
	Zombie		*zombieOne;
	Zombie		*zombieTwo;
	ZombieEvent zombieEvent;

	zombieEvent.setZombieType("Walker");
	zombieOne = zombieEvent.randomChump();
	zombieOne->announce();

	zombieEvent.setZombieType("Eater");
	zombieTwo = zombieEvent.randomChump();
	zombieTwo->announce();
	delete zombieOne;
	delete zombieTwo;
}
