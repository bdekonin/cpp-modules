/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/19 16:55:34 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:08:23 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/* Constructor */
Character::Character()
: _name("")
{
}
Character::Character(std::string name)
: _name(name)
{
}

/* Destructor */
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

/* Copy Constructor */
Character::Character(const Character &e)
{
	*this = e;
}

/* Operation overload = */
Character& Character::operator = (const Character& e)
{
	this->_name = e._name;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = e._inventory[i]->clone();
	return *this;
}

/* Methods */
std::string const &Character::getName() const
{
	return this->_name;
}
void Character::equip(AMateria *m)
{
	if (m == NULL)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			return ;
		}
	}
	std::cout << this->_name << " is full." << std::endl;
}
void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_inventory[idx] = NULL;
}
void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 4)
		return ;
	if (this->_inventory[idx] == NULL)
		return ;
	this->_inventory[idx]->use(target);
}