/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:35:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 12:33:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		/* Constructor  */
		Cat()
		{
			this->_type = "Cat";
		}

		/* Destructor */
		~Cat()
		{
		}

		/* Copy constructor */
		Cat(const Cat &e)
		{
			this->_type = e._type;
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
	private:
		// ...
};

#endif // CAT_HPP