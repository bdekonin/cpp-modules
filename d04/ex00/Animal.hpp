/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:47:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 15:34:55 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:
		/* Constructor  */
		Animal();
		Animal(std::string type);

		/* Destructor */
		virtual ~Animal();

		/* Copy constructor */
		Animal(const Animal &e);
		
		/* Operation overload = */
		Animal& operator = (const Animal &e);

		// Methods
		virtual void makeSound() const;
	protected:
		std::string _type;
};

#endif // ANIMAL_HPP