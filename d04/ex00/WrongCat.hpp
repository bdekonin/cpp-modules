/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:59:05 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/30 13:01:33 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Constructor  */
		WrongCat()
		{
			this->_type = "WrongCat";
		}

		/* Destructor */
		~WrongCat()
		{
		}

		/* Copy constructor */
		WrongCat(const WrongCat &e)
		{
			this->_type = e._type;
		}

		/* Operation overload = */
		WrongCat& operator = (const WrongCat &e)
		{
			this->_type = e._type;
			return *this;
		}

		// Methods
		void makeSound() const
		{
			std::cout << "I am an WrongCat .... " << std::endl;
		}
	private:
		// ...
};

#endif // WRONGCAT_HPP