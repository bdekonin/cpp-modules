/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 14:26:23 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/08 15:11:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		/* Constructor  */
		ScavTrap();

		/* Destructor */
		virtual ~ScavTrap();

		/* Copy constructor */
		ScavTrap(const ScavTrap&);

		/* Operation overload = */
		ScavTrap& operator = (const ScavTrap& e);

		// Methods
		// ...
	private:
		// ...
};

#endif // SCAVTRAP_HPP