/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 12:45:47 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:48:20 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

/* Constructor */
Phonebook::Phonebook(void)
: _size(0)
{
}

/* Destructor */
Phonebook::~Phonebook()
{
}

/* Member Functions */
void Phonebook::add(void)
{
    if (this->_size == 8) // If a ninth contact is added, replace the oldest contact.
    {
        std::cout << "Not enough paper, Book is full. Replacing the first page." << std::endl;
        this->_contacts[0].addInformation();
        this->_size++;
    }
    else if (this->_size < 8)
    {
        this->_contacts[this->_size].addInformation();
        this->_size++;
    }
    else
        std::cout << "Not enough paper, Book is full!" << std::endl;   
}
void Phonebook::search(void)
{
    std::cout << "|     index|first name| last name|  nickname|\n";
    for (size_t i = 0; i < this->_size; i++)
    {
        // print everything with a | inbetween
        std::cout << "|" << std::setw(10) << i;
        std::cout << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getFirstName());
        std::cout << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getLastName());
        std::cout << "|" << std::setw(10) << this->_truncate(this->_contacts[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::string input;
    std::cout << "Enter the index of the contact you want to see: ";
    std::getline(std::cin, input);
    while (input.empty() || input.find_first_not_of("0123456789") != std::string::npos)
    {
        std::cout << "Invalid input, please enter a number: ";
        std::getline(std::cin, input);
    }
    
    size_t index = std::stoi(input);
    if (index < this->_size)
        this->_contacts[index].printInformation();
    else
        std::cout << "Contact does not exist!" << std::endl;
}

/* Private Functions */
std::string Phonebook::_truncate(std::string str)
{
    if (str.size() >= 10)
        return (str.substr(0, 9) + ".");
    return (str);
}