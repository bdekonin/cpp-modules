/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:47:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/31 14:02:33 by bdekonin      ########   odam.nl         */
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
		}

		/* Copy constructor */
		Animal(const Animal &e)
		{
			this->_type = e._type;
		}
		std::string _type;

	public:
		/* Destructor */
		virtual ~Animal()
		{
		}
		
		/* Operation overload = */
		Animal& operator =(const Animal &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		virtual void makeSound() const
		{
			std::cout << "I am an animal .... " << std::endl;
		}
		std::string getType() const
		{
			return this->_type;
		}
	private:
		// ...
};

#endif // ANIMAL_HPP