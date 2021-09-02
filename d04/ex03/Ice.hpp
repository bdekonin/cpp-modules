/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/31 14:31:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/31 15:30:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		/* Constructor  */
		Ice()
		: AMateria("ice")
		{
		}
		
		/* Destructor */
		~Ice();

		/* Copy constructor */
		Ice(const Ice &e)
		: AMateria(e.getType())
		{
			*this = e;
		}

		/* Operation overload = */
		Ice& operator = (const Ice &e)
		{
			(void)e;
			return (*this);
		}

		// Methods
		AMateria *clone() const
		{
			return new Ice();
		}
		void use(ICharacter &target)
		{
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		}
	private:
		// ...
};

#endif // ICE_HPP