/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 14:43:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 15:09:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

/* Constructor */
Karen::Karen(void) { }

/* Destructor */
Karen::~Karen(void) { }

/* Member function */
void Karen::complain(std::string level)
{
	std::string array[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i = 0;
	for (; i < 4; i++)
	{
		if (level == array[i])
			break ;
	}

	switch (i)
	{
		case 0:
			std::cout << "[" << array[i] << "]" << std::endl;
			this->debug();
			break;
		case 1:
			std::cout << "[" << array[i] << "]" << std::endl;
			this->info();
			break;
		case 2:
			std::cout << "[" << array[i] << "]" << std::endl;
			this->warning();
			break;
		case 3:
			std::cout << "[" << array[i] << "]" << std::endl;
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

/* Private Fuctions */
void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}
void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}
void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}