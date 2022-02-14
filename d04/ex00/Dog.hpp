/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/14 20:48:23 by bdekonin      ########   odam.nl         */
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
		: Animal("Dog")
		{
		}

		/* Destructor */
		virtual ~Dog()
		{
		}

		/* Copy constructor */
		Dog(const Dog &e)
		: Animal(e)
		{
		}

		/* Operation overload = */
		Dog &operator = (const Dog &e)
		{
			this->_type = e._type;
			return *this;
		}
	private:
		// ...
};

#endif // DOG_HPP