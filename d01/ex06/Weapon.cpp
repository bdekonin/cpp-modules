/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:31:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 09:39:53 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	this->type = name;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string &Weapon::getType()
{
	return (this->type);
}

