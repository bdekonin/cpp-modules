/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 12:54:40 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 16:10:47 by bdekonin      ########   odam.nl         */
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
		WrongAnimal();
		WrongAnimal(std::string type);

		/* Destructor */
		virtual ~WrongAnimal();

		/* Copy constructor */
		WrongAnimal(const WrongAnimal &e);
		
		/* Operation overload = */
		WrongAnimal& operator = (const WrongAnimal &e);

		// Methods
		virtual void makeSound() const;
	protected:
		std::string _type;
};

#endif // WRONGANIMAL_HPP