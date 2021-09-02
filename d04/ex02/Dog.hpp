/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 16:18:49 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		/* Constructor  */
		Dog()
		{
			this->_type = "Dog";
			this->_brain = new Brain();
		}

		/* Destructor */
		~Dog()
		{
			delete this->_brain;
		}

		/* Copy constructor */
		Dog(const Dog &e)
		{
			this->_type = e._type;
			this->_brain = new Brain();
			*this->_brain = *e._brain;
			std::cout << "deep copy of the cat is done !! " << std::endl;
			std::cout << "Copy constructor called" << std::endl;
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
		const Brain *getBrain() const
		{
			return this->_brain;
		}
	private:
		Brain *_brain;
};

#endif // DOG_HPP