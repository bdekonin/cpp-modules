/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:54:40 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 12:58:42 by bdekonin      ########   odam.nl         */
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
		};

		/* Destructor */
		~WrongAnimal()
		{
		}

		/* Copy constructor */
		WrongAnimal(const WrongAnimal &e)
		{
			this->_type = e._type;
		}

		/* Operation overload = */
		WrongAnimal& operator = (const WrongAnimal &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		void makeSound() const
		{
			std::cout << "I am a WrongAnimal .... " << std::endl;
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

#endif // WRONGANIMAL_HPP