/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 09:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 18:33:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	public:
		/* Constructor  */
		Brain();

		/* Destructor */
		virtual ~Brain();

		/* Copy constructor */
		Brain(const Brain &e);

		/* Operation overload = */
		Brain& operator = (const Brain& e);

		// Methods
		// ...
	private:
		std::string *_ideas;
};

#endif // BRAIN_HPP