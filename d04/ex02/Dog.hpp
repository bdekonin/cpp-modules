/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 10:53:54 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 18:37:31 by bdekonin      ########   odam.nl         */
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
		Dog();

		/* Destructor */
		virtual ~Dog();

		/* Copy constructor */
		Dog(const Dog &e);

		/* Operation overload = */
		Dog &operator = (const Dog &e);
	private:
		Brain _brain;
};

#endif // DOG_HPP