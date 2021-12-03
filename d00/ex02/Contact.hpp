/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 09:47:01 by bdekonin      ########   odam.nl         */
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
		Contact(void)
		{
			
		}

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