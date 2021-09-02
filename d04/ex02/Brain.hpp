/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 13:18:42 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 14:22:47 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		/* Constructor  */
		Brain()
		{
			std::cout << "Brain Class Constructed" << std::endl;
			this->_ideas = new std::string[100];
		}

		/* Destructor */
		~Brain()
		{
			std::cout << "Brain Class Destructed" << std::endl;
			delete [] this->_ideas;
		}

		/* Copy constructor */
		Brain(const Brain &e)
		{
			for (size_t i = 0; i < 100; i++)
				this->_ideas[i] = e._ideas[i];
		}

		/* Operation overload = */
		Brain& operator = (const Brain &e)
		{
			for (size_t i = 0; i < 100; i++)
				this->_ideas[i] = e._ideas[i];
			return *this;
		}

		// Methods
		// ...
	protected: // not private or else copy contructor wont work
		std::string *_ideas;
};

#endif // BRAIN_HPP