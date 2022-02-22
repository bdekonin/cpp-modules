/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Phonebook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/02 21:39:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 12:48:04 by bdekonin      ########   odam.nl         */
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
		Phonebook();

		/* Destructor */
		~Phonebook();

		void add(void);
		void search(void);
	private:
		std::string _truncate(std::string str);
		Contact _contacts[CONTACTS_MAX];
		size_t	_size;
};

#endif // PHONEBOOK_HPP