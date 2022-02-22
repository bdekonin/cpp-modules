/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 12:39:46 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:45:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Constructor */
Contact::Contact(void)
{
}

/* Destructor */
Contact::~Contact()
{
    this->_firstName = "";
    this->_lastName = "";
    this->_nickName = "";
    this->_phoneNumber = "";
    this->_darkestSecret = "";
}

/* Member Functions */
void Contact::addInformation(void)
{
    this->_firstName = this->_getInput(FIRSTNAME);
    this->_lastName = this->_getInput(LASTNAME);
    this->_nickName = this->_getInput(NICKNAME);
    this->_phoneNumber = this->_getInput(PHONE);
    this->_darkestSecret = this->_getInput(SECRET);
}
void Contact::addInformation(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
{
    this->_firstName = firstname;
    this->_lastName = lastname;
    this->_nickName = nickname;
    this->_phoneNumber = phonenumber;
    this->_darkestSecret = darkestsecret;
}
void Contact::printInformation(void) const
{
    std::cout << FIRSTNAME << this->_firstName << std::endl;
    std::cout << LASTNAME << this->_lastName << std::endl;
    std::cout << NICKNAME << this->_nickName << std::endl;
    std::cout << PHONE << this->_phoneNumber << std::endl;
    std::cout << SECRET << this->_darkestSecret << std::endl;    
}

/* Getters */
std::string Contact::getFirstName() const
{
    return this->_firstName;
}
std::string Contact::getLastName() const
{
    return this->_lastName;
}
std::string Contact::getNickName() const
{
    return this->_nickName;
}
std::string Contact::getPhoneNumber() const
{
    return this->_phoneNumber;
}
std::string Contact::getDarkestSecret() const
{
    return this->_darkestSecret;
}

/* Private Functions */
std::string Contact::_getInput(std::string prompt)
{
    std::string input;
    std::cout << prompt;
    std::getline(std::cin, input);
    return input;
}