/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:18:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 15:28:37 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Cure : public AMateria
{
	public:
		/* Constructor  */
		Cure()
		: AMateria("cure")
		{
		}
		Cure &operator = (const Cure &e)
		{
			(void)e;
			return *this;
		}
		

		/* Methods */
		AMateria *clone() const
		{
			return new Cure();
		}
		void use(ICharacter &target)
		{
			std::cout << "* heals " << target.getName() << " *" << std::endl;
		}
};

#endif // CURE_HPP