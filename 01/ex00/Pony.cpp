/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:29:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 07:20:29 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void)
{
	std::cout << "\tConstructor Called" << std::endl;
}
Pony::~Pony(void)
{
	std::cout << "\tDestructor Called" << std::endl;
}

void Pony::setColor(std::string color)
{
	this->color = color;
}

std::string Pony::getColor(void)
{
	return (this->color);
}

void Pony::setName(std::string name)
{
	this->name = name;
}

std::string Pony::getName(void)
{
	return (this->name);
}

void ponyOnTheHeap(void)
{
	std::cout << "ponyOnTheHeap: " << std::endl;
	Pony *pony = new Pony;
	if (!pony)
	{
		std::cout << "Not enough memory available" << std::endl;
		return ;
	}
	pony->setColor("Purple");
	std::cout << "\t\tColor = " << pony->getColor() << std::endl;
	pony->setName("Gert");
	std::cout << "\t\tName = " << pony->getName() << std::endl;	
	delete pony;
}

void ponyOnTheStack(void)
{
	std::cout << "ponyOnTheStack: " << std::endl;
	Pony pony;
	pony.setColor("Orange");
	std::cout << "\t\tColor = " << pony.getColor() << std::endl;
	pony.setName("Amanda");
	std::cout << "\t\tName = " << pony.getName() << std::endl;	
}