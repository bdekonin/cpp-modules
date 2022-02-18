/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 09:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/16 10:22:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

class Brain
{
	public:
		/* Constructor  */
		Brain()
		{
			std::cout << "Brain constructed" << std::endl;
			this->_ideas = new std::string[100];
		}

		/* Destructor */
		virtual ~Brain()
		{
			std::cout << "Brain destructed" << std::endl;
			delete[] this->_ideas;
		}

		/* Copy constructor */
		Brain(const Brain &e)
		{
			std::cout << "Brain copy constructed" << std::endl;
			this->_ideas = new std::string[100];
			for (int i = 0; i < 100; i++)
				this->_ideas[i] = e._ideas[i];
		}

		/* Operation overload = */
		Brain& operator = (const Brain& e)
		{
			for (int i = 0; i < 100; i++)
				this->_ideas[i] = e._ideas[i];
			return *this;
		}

		// Methods
		// ...
	private:
		std::string *_ideas;
};

#endif // BRAIN_HPP