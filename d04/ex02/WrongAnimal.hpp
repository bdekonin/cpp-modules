/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:54:40 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/14 21:11:39 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		/* Constructor  */
		WrongAnimal()
		{
			this->_type = "WrongAnimal";
			std::cout << this->_type << " has been born." << std::endl;
		}
		WrongAnimal(std::string type)
		{
			this->_type = type;
			std::cout << this->_type << " has been born." << std::endl;
		}

		/* Destructor */
		virtual ~WrongAnimal()
		{
			std::cout << this->_type << " has died." << std::endl;
		}

		/* Copy constructor */
		WrongAnimal(const WrongAnimal &e)
		{
			this->_type = e._type;
			std::cout << this->_type << " has been born." << std::endl;
		}
		
		/* Operation overload = */
		WrongAnimal& operator = (const WrongAnimal &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		virtual void makeSound() const
		{
			std::cout << "I am an " << this->_type << " .... " << std::endl;
		}
	protected:
		std::string _type;
};

#endif // WRONGANIMAL_HPP