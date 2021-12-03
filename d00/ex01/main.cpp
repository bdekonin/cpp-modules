/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 09:44:55 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 12:04:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Phonebook.hpp"
#include "Contact.hpp"

int main()
{
	Phonebook phonebook;
	std::string command;

	while (1)
	{
		std::cout << "Input: ";
		std::getline(std::cin, command, '\n');

		if (command == "add")
			phonebook.add();
		else if (command == "search")
			phonebook.search();
		else if (command == "exit")
			break ;
	}
}