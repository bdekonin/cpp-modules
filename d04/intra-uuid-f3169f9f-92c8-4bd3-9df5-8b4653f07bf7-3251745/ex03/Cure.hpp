/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 15:18:48 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:20:21 by bdekonin      ########   odam.nl         */
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
		Cure();
		Cure(const Cure &e);
		Cure &operator = (const Cure &e);

		/* Methods */
		AMateria *clone() const;
		void use(ICharacter &target);
};

#endif // CURE_HPP