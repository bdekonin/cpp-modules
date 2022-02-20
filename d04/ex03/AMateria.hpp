/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/16 12:10:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 16:55:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
# include "ICharacter.hpp"
#include <iostream>

class AMateria
{
	public:
		/* Constructor  */
		AMateria();
		AMateria(std::string const & type);

		/* Destructor */
		virtual ~AMateria();

		/* Copy constructor */
		AMateria(const AMateria &e);

		/* Operation overload = */
		AMateria& operator = (const AMateria& e);

		// Methods
		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string _type;
};

#endif // AMATERIA_HPP