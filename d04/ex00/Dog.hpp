/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 11:37:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal
{
	public:
		/* Constructor  */
		Dog()
		{
			this->_type = "Dog";
		}

		/* Destructor */
		~Dog()
		{
		}

		/* Copy constructor */
		Dog(const Dog &e)
		{
			this->_type = e._type;
		}

		/* Operation overload = */
		Dog &operator = (const Dog &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		void makeSound() const
		{
			std::cout << "I am an Dog .... " << std::endl;
		}
	private:
		// ...
};

#endif // DOG_HPP