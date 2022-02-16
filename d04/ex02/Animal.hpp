/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:47:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/16 11:47:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	protected:
		/* Constructor  */
		Animal()
		{
			this->_type = "Animal";
			std::cout << this->_type << " has been born." << std::endl;
		}
		Animal(std::string type)
		{
			this->_type = type;
			std::cout << this->_type << " has been born." << std::endl;
		}
		/* Copy constructor */
		Animal(const Animal &e)
		{
			this->_type = e._type;
			std::cout << this->_type << " has been born." << std::endl;
		}

		/* Operation overload = */
		Animal& operator = (const Animal &e)
		{
			this->_type = e._type;
			return *this;
		}
		
	public:
		/* Destructor */
		virtual ~Animal()
		{
			std::cout << this->_type << " has died." << std::endl;
		}

		// Methods
		virtual void makeSound() const
		{
			std::cout << "I am an " << this->_type << " .... " << std::endl;
		}
	protected:
		std::string _type;
};

#endif // ANIMAL_HPP