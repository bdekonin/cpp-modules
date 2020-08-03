/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 12:44:42 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/30 12:53:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define CONTACTS_MAX 8

#define FIRSTNAME "What is your surname: "
#define LASTNAME "What is your lastname: "
#define NICKNAME "What is your nickname: "
#define LOGIN "What is your login: "
#define POSTAL "What your postal Address: "
#define EMAIL "Whats your Email: "
#define PHONE "Phone Number: "
#define BIRTHDAY "Birthday: "
#define FAVOMEAL "Favorite Meal: "
#define UNDERWEAR "Underwear Color: "
#define SECRET "Darkest Secret: "

class Contacts
{
	public:
		Contacts(void);
		~Contacts(void);
		void			setFirstName(void);
		void			setLastName(void);
		void			setNickName(void);
		void			setLogin(void);
		void			setPostalAddress(void);
		void			setEmailAddress(void);
		void			setPhoneNumber(void);
		void			setBirthdayDate(void);
		void			setFavoriteMeal(void);
		void			setUnderwearColor(void);
		void			setDarkestSecret(void);
		void			ListContacts(Contacts list[], int size);
		int			getInformation(std::string str, Contacts list[], int count);
		void printInformation(Contacts list);
	private:
		std::string		m_firstName;
		std::string		m_lastName;
		std::string		m_nickName;
		std::string		m_login;
		std::string		m_postalAddress;
		std::string		m_emailAdress;
		std::string		m_phoneNumber;
		std::string		m_birthdayDate;
		std::string		m_favoriteMeal;
		std::string		m_underwearColor;
		std::string		m_darkestSecret;
};

Contacts addContact();

#endif