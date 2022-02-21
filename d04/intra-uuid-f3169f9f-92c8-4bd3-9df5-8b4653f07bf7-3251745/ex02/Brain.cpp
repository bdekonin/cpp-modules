/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 18:08:10 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 18:55:37 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/* Constructor  */
Brain::Brain()
{
	std::cout << "Brain constructed" << std::endl;
	this->_ideas = new std::string[100];
}

/* Destructor */
Brain::~Brain()
{
	std::cout << "Brain destructed" << std::endl;
	delete[] this->_ideas;
}

/* Copy Constructor */
Brain::Brain(const Brain &e)
{
	std::cout << "Brain copy constructed" << std::endl;
	*this = e;
}

/* Operation overload = */
Brain& Brain::operator = (const Brain& e)
{
	delete[] this->_ideas;
	this->_ideas = new std::string[100];

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = e._ideas[i];
	return *this;
}