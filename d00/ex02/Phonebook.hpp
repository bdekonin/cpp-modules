/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 09:48:49 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

#define CONTACTS_MAX 8


class Phonebook
{
	public:
		/* Constructor  */
		Phonebook()
		: _size(0)
		{
		}

		/* Destructor */
		~Phonebook()
		{
		}

		void add(void)
		{
			if (this->_size == 8) // If a ninth contact is added, replace the oldest contact.
				this->_contacts[0].addInformation();
			else if (this->_size < 8)
			{
				this->_contacts[this->_size].addInformation();
				this->_size++;
			}
			else
				std::cout << "Not enough paper, Book is full!" << std::endl;
			
		}
		void search(void)
		{
			std::cout << "|     index|first name| last name|  nickname|\n|";
			for (int i = 0; i < this->_size; i++)
			{
				std::cout << std::setw(10) << i << "|";

				std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getFirstName()) << "|";
				std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getLastName()) << "|";
				std::cout << std::setw(10) << this->_truncate(this->_contacts[i].getNickName()) << "|";
			}
		}
	private:
		// ..
		std::string _truncate(std::string str)
		{
			if (str.size() >= 10)
				return (str.substr(0, 9) + ".");
			return (str);
		}
		Contact _contacts[CONTACTS_MAX];
		size_t	_size;
};

#endif // PHONEBOOK_HPP