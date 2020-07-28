/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:44:11 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 11:32:27 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->m_type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name, this->m_type);
	
	return (zombie);
}

Zombie	*ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	int index;

	std::string names[] = {"Bob", "Lars", "Rowan", "Sid", "mpeerdem", "Gerrit"};
	srand(time(0));
	index = (rand() % 6);
	zombie = ZombieEvent::newZombie(names[index]);
	return (zombie);
}