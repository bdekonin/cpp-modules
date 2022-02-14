/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:59:05 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/14 21:18:15 by bdekonin      ########   odam.nl         */
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
		: WrongAnimal("WrongCat")
		{
		}

		/* Destructor */
		virtual ~WrongCat()
		{
		}

		/* Copy constructor */
		WrongCat(const WrongCat &e)
		: WrongAnimal(e)
		{
		}

		/* Operation overload = */
		WrongCat &operator = (const WrongCat &e)
		{
			this->_type = e._type;
			return *this;
		}
	private:
		// ...
};

#endif // WRONGCAT_HPP