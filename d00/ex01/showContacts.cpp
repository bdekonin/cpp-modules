/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   showContacts.cpp                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 21:03:41 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 12:34:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contacts::printInformation(Contacts list)
{
	std::cout << "Firstname       is: " << list.m_firstName << std::endl;
	std::cout << "lastname        is: " << list.m_lastName << std::endl;
	std::cout << "nickname        is: " << list.m_nickName << std::endl;
	std::cout << "login           is: " << list.m_login << std::endl;
	std::cout << "postal address  is: " << list.m_postalAddress << std::endl;
	std::cout << "email address   is: " << list.m_emailAdress << std::endl;
	std::cout << "phone number    is: " << list.m_phoneNumber << std::endl;
	std::cout << "birthday date   is: " << list.m_birthdayDate << std::endl;
	std::cout << "favorite meal   is: " << list.m_favoriteMeal << std::endl;
	std::cout << "underwear color is: " << list.m_underwearColor << std::endl;
	std::cout << "darkest secret  is: " << list.m_darkestSecret << std::endl;
}

int Contacts::getInformation(std::string str, Contacts list[], int count)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (!isdigit(str[i]) && str[i] != 32)
		{
			std::cout << "Invalid input. Numbers only." << std::endl;
			return (0);
		}
		i++;
	}
	i = std::stoi(str, nullptr, 10);
	if (i > (count - 1))
	{
		std::cout << "Invalid input. Input cannot be higher then " << (count - 1) << std::endl;
		return (0);
	}
	printInformation(list[i]);
	return (1);
}



static std::string truncString(std::string oldString)
{
	std::string newString;
	
	newString = oldString.substr(0, 10);
	// std::cout << "newstring: " << newString << std::endl;
	newString[9] = '.';
	return (newString);
}


void Contacts::ListContacts(Contacts list[], int count)
{
	std::string num;

	std::cout << "     index|first name| last name|  nickname\n";
	for (int i = 0; i < count; i++)
	{
		std::cout << std::setw(10) << i << "|";
		if (list[i].m_firstName.length() > 10)
			std::cout << truncString(list[i].m_firstName) << "|";
		else
		{
			std::cout << std::setw(10);
			std::cout << list[i].m_firstName << "|";
		}
		if (list[i].m_lastName.length() > 10)
			std::cout << truncString(list[i].m_lastName) << "|";
		else
		{
			std::cout << std::setw(10);
			std::cout << list[i].m_lastName << "|";
		}
		if (list[i].m_nickName.length() > 10)
			std::cout << truncString(list[i].m_nickName) << "|";
		else
		{
			std::cout << std::setw(10);
			std::cout << list[i].m_nickName;
		}
		std::cout << std::endl;
	}
	while (1)
	{	
		std::cout << "Please select an index: ";
		getline(std::cin, num, '\n');
		if (list->getInformation(num, list, count))
			return ;
	}
}