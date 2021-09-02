/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:35:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 16:20:49 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:
		/* Constructor  */
		Cat()
		{
			this->_type = "Cat";
			this->_brain = new Brain();
		}

		/* Destructor */
		~Cat()
		{
			delete this->_brain;
		}

		/* Copy constructor */
		Cat(const Cat &e)
		{
			this->_type = e._type;
			this->_brain = new Brain();
			*this->_brain = *e._brain;
			std::cout << "deep copy of the cat is done !! " << std::endl;
			std::cout<<"Copy constructor called"<< std::endl;
		}

		/* Operation overload = */
		Cat &operator = (const Cat &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		void makeSound() const
		{
			std::cout << "I am an Cat .... " << std::endl;
		}
		const Brain *getBrain() const
		{
			return this->_brain;
		}
	private:
		Brain *_brain;
};

#endif // CAT_HPP