/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 12:47:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:29:50 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor  */
Zombie::Zombie(std::string name) : _name(name) { }
Zombie::Zombie(void) { }

/* Destructor */
Zombie::~Zombie() { }

// Methods
void Zombie::announce()
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setName(std::string name)
{
	this->_name = name;
}

void	randomChump(std::string name)
{
	Zombie 	zombie(name);

	zombie.announce();
}

Zombie* newZombie(std::string name)
{
    Zombie* newZombie = new Zombie(name);

    return (newZombie);
}
