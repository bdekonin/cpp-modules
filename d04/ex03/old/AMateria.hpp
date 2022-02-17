/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/31 14:08:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/08/31 15:29:22 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria
{
	public:
		/* Constructor  */
		AMateria(std::string const &type)
		: _type(type)
		{
		}

		/* Destructor */
		~AMateria();

		/* Copy constructor */
		AMateria(const AMateria &e)
		: _type(e.getType())
		{
		}

		/* Operation overload = */
		AMateria& operator = (const AMateria &e)
		{
			// this->_type = e.getType();
			return *this;
		}

		// Methods
		std::string const &getType() const // Returns the materia type
		{
			return this->_type;
		}
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
	protected:
		std::string _type;
};

#endif // AMATERIA_HPP