/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/19 17:21:33 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/21 11:49:35 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/* Constructor */
MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
}

/* Destructor */
MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destroyed" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
			delete this->_materia[i];
	}
}

/* Copy Constructor */
MateriaSource::MateriaSource(const MateriaSource &e)
{
	std::cout << "MateriaSource copy constructed" << std::endl;
	*this = e;
}

/* Operation overload = */
MateriaSource& MateriaSource::operator = (const MateriaSource& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_materia[i];
		if (rhs._materia[i])
			this->_materia[i] = rhs._materia[i]->clone();
		else
			this->_materia[i] = NULL;
	}
	return *this;
}

/* Methods */
void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->_materia[i])
		{
			this->_materia[i] = m->clone();
			std::cout << "MateriaSource learned " << m->getType() << std::endl;
			return;
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
}
AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i])
		{
			if (this->_materia[i]->getType() == type)
			{
				std::cout << "MateriaSource cloning " << type << std::endl;
				return this->_materia[i]->clone();
			}
		}
	}
	std::cout << "MateriaSource " << type << " not found in list." << std::endl;
	return NULL;
}