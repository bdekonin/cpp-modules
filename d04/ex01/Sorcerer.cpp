/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 23:11:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/06 17:28:02 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name)
{
	this->_name = name;
	this->_type = "Sorcerer";
	
	std::cout << this->_name << ", " << this->_type << ", is born!" << std::endl;
}

std::ostream &operator <<(std::ostream &fd, const Sorcerer &Sorc)
{
	fd << "F : " << "keck" << " I : ";
	return fd;
}

Sorcerer::~Sorcerer(void)
{
	
}