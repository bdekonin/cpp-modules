/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:09:59 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 14:24:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contacts::Contacts(void) // not used
{
	return  ;
}

Contacts::~Contacts(void) //not used
{
	return ;
}

int main(void)
{
	Contacts		paper[CONTACTS_MAX];
	int				count;
	std::string		command;

	count = 0;
	while (1)
	{
		std::cout << "Input: ";
		std::getline(std::cin, command, '\n');
		if (command == "ADD")
		{
			if (count >= CONTACTS_MAX)
				std::cout << "Not enough paper, Book is full!" << std::endl;
			else
			{
				paper[count] = addContact();
				count++;
			}
			
		}
		else if (command == "SEARCH")
		{
			if (count == 0)
				std::cout << "Book is empty!" << std::endl;
			else
				paper->ListContacts(paper, count);
		}
		else if (command == "EXIT")
			break ;
	}
	return (0);
}