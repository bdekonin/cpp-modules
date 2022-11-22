/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:45:34 by bdekonin      ########   odam.nl         */
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
		Contact(void);

		/* Destructor */
		~Contact();

		/* Member Functions */
		void addInformation(void);
		void addInformation(std::string firstname , std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret);
		void printInformation(void) const;
		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarkestSecret() const;
	private:
		std::string _getInput(std::string prompt);
		std::string _firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};


#endif // CONTACT_HPP