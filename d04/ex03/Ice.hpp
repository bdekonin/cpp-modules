/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 13:29:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:38:32 by bdekonin      ########   odam.nl         */
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
		Ice();
		Ice(const Ice &e);
		Ice &operator = (const Ice &e);


		/* Methods */
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif // ICE_HPP