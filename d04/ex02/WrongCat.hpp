/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:59:05 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 16:13:42 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		/* Constructor  */
		WrongCat();

		/* Destructor */
		virtual ~WrongCat();

		/* Copy constructor */
		WrongCat(const WrongCat &e);

		/* Operation overload = */
		WrongCat &operator = (const WrongCat &e);
	private:
		// ...
};

#endif // WRONGCAT_HPP