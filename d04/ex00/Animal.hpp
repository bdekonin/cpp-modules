/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:47:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 12:58:34 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		/* Constructor  */
		Animal()
		{
			this->_type = "Animal";
		}

		/* Destructor */
		~Animal()
		{
		}

		/* Copy constructor */
		Animal(const Animal &e)
		{
			this->_type = e._type;
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
	protected:
		std::string _type;
};

#endif // ANIMAL_HPP