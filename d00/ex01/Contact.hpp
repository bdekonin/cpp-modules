/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 11:56:19 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

# define FIRSTNAME "First Name: "
# define LASTNAME "Last Name: "
# define NICKNAME "Nick Name: "
# define PHONE "Phone Number: "
# define SECRET "Darkest Secret: "


class Contact
{
	public:
		/* Constructor  */
		Contact(void) { }

		/* Destructor */
		~Contact()
		{
			this->_firstName = "";
			this->_lastName = "";
			this->_nickName = "";
			this->_phoneNumber = "";
			this->_darkestSecret = "";
		}

		/* Member Functions */
		void addInformation(void)
		{
			this->_firstName = this->_getInput(FIRSTNAME);
			this->_lastName = this->_getInput(LASTNAME);
			this->_nickName = this->_getInput(NICKNAME);
			this->_phoneNumber = this->_getInput(PHONE);
			this->_darkestSecret = this->_getInput(SECRET);
		}
		void addInformation(std::string firstname , std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
		{
			this->_firstName = firstname;
			this->_lastName = lastname;
			this->_nickName = nickname;
			this->_phoneNumber = phonenumber;
			this->_darkestSecret = darkestsecret;
		}
		std::string getFirstName() const
		{
			return this->_firstName;
		}
		std::string getLastName() const
		{
			return this->_lastName;
		}
		std::string getNickName() const
		{
			return this->_nickName;
		}
		std::string getPhoneNumber() const
		{
			return this->_phoneNumber;
		}
		std::string getDarkestSecret() const
		{
			return this->_darkestSecret;
		}
		void printInformation(void) const
		{
			std::cout << "First Name: " << this->_firstName << std::endl;
			std::cout << "Last Name: " << this->_lastName << std::endl;
			std::cout << "Nick Name: " << this->_nickName << std::endl;
			std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
			std::cout << "Darkest Secret: " << this->_darkestSecret << std::endl;
		}
	private:
		std::string _getInput(std::string prompt)
		{
			std::string input;
			std::cout << prompt;
			std::getline(std::cin, input);
			return input;
		}
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};


#endif // CONTACT_HPP