/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/02 22:32:35 by bdekonin      ########   odam.nl         */
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