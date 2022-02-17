/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 13:29:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/17 21:05:32 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <iostream>

class Ice : public AMateria
{
	public:
		/* Constructor  */
		Ice()
		: AMateria("ice")
		{
		}

		/* Methods */
		AMateria *clone() const
		{
			return new Ice();
		}
		void use(ICharacter &target)
		{
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		}
};

#endif // ICE_HPP