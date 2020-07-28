/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   addContacts.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 17:29:46 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 10:54:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Contacts::setFirstName(void)
{
	std::string str;
	std::cout << FIRSTNAME;
	getline(std::cin, str, '\n');
	this->m_firstName = str;
}

void Contacts::setLastName(void)
{
	std::string str;
	std::cout << LASTNAME;
	getline(std::cin, str, '\n');
	this->m_lastName = str;
}

void Contacts::setNickName(void)
{
	std::string str;
	std::cout << NICKNAME;
	getline(std::cin, str, '\n');
	this->m_nickName = str;
}

void Contacts::setLogin(void)
{
	std::string str;
	std::cout << LOGIN;
	getline(std::cin, str, '\n');
	this->m_login = str;
}

void Contacts::setPostalAddress(void)
{
	std::string str;
	std::cout << POSTAL;
	getline(std::cin, str, '\n');
	this->m_postalAddress = str;
}

void Contacts::setEmailAddress(void)
{
	std::string str;
	std::cout << EMAIL;
	getline(std::cin, str, '\n');
	this->m_emailAdress = str;
}

void Contacts::setPhoneNumber(void)
{
	std::string str;
	std::cout << PHONE;
	getline(std::cin, str, '\n');
	this->m_phoneNumber = str;
}

void Contacts::setBirthdayDate(void)
{
	std::string str;
	std::cout << BIRTHDAY;
	getline(std::cin, str, '\n');
	this->m_birthdayDate = str;
}

void Contacts::setFavoriteMeal(void)
{
	std::string str;
	std::cout << FAVOMEAL;
	getline(std::cin, str, '\n');
	this->m_favoriteMeal = str;
}

void Contacts::setUnderwearColor(void)
{
	std::string str;
	std::cout << UNDERWEAR;
	getline(std::cin, str, '\n');
	this->m_underwearColor = str;
}

void Contacts::setDarkestSecret(void)
{
	std::string str;
	std::cout << SECRET;
	getline(std::cin, str, '\n');
	this->m_darkestSecret = str;
}

Contacts addContact()
{
	Contacts list;
	
	list.setFirstName();
	list.setLastName();
	list.setNickName();
	list.setLogin();
	list.setPostalAddress();
	list.setEmailAddress();
	list.setPhoneNumber();
	list.setBirthdayDate();
	list.setFavoriteMeal();
	list.setUnderwearColor();
	list.setDarkestSecret();
	return (list);
}