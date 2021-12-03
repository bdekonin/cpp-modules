/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Karen.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 14:43:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 15:12:54 by bdekonin      ########   odam.nl         */
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
	std::string array[] = {"debug",
		"info",
		"warning",
		"error"
	};
	void (Karen::*pointers[])(void) = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == array[i])
		{
			(this->*pointers[i])();
			return ;
		}
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