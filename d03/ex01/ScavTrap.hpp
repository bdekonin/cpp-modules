/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/08 14:26:23 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 14:42:36 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
	public:
		/* Constructor  */
		ScavTrap();
		ScavTrap(std::string name);

		/* Destructor */
		virtual ~ScavTrap();

		/* Copy constructor */
		ScavTrap(const ScavTrap&);

		/* Operation overload = */
		ScavTrap& operator = (const ScavTrap& e);

		// Methods
		void guardGate();
		void attack(const std::string &target);

};

#endif // SCAVTRAP_HPP