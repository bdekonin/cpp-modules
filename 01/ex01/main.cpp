/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:04:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:30:28 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie;
	
	zombie = newZombie("Bob");
	
	zombie->announce();
	delete zombie;


	zombie = zombieHorde(5, "Albert");
	for (int i = 0; i < 5; i++)
		zombie[i].announce();

	delete[] zombie;
}