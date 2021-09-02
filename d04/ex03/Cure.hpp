/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/31 14:31:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/31 14:43:11 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		/* Constructor  */
		Cure()
		: AMateria("cure")
		{
		}
		
		/* Destructor */
		~Cure();

		/* Copy constructor */
		Cure(const Cure &e)
		: AMateria(e.getType())
		{
			*this = e;
		}

		/* Operation overload = */
		Cure& operator = (const Cure &e)
		{
			(void)e;
			return (*this);
		}

		// Methods
		AMateria *clone() const
		{
			return new Cure();
		}
		void use(ICharacter &target)
		{
			std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
		}
	private:
		// ...
};

#endif // CURE_HPP