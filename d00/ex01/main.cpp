/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 09:44:55 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:34:51 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"
#include <string.h>

int main()
{
	Phonebook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Input: ";
		std::getline(std::cin, command, '\n');

		if (strcasecmp(command.c_str(), "add") == 0)
			phonebook.add();
		else if (strcasecmp(command.c_str(), "search") == 0)
			phonebook.search();
		else if (strcasecmp(command.c_str(), "exit") == 0)
			break ;
	}
}