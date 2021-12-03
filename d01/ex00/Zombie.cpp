/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 12:47:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:26:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Constructor  */
Zombie::Zombie(std::string name) : _name(name) { }

/* Destructor */
Zombie::~Zombie() { }

// Methods
void Zombie::announce()
{
	std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ..." << std::endl;
}