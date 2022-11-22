/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   DiamondTrap.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 13:48:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 11:45:46 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#include <string>
#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		/* Constructor  */
		DiamondTrap();
		DiamondTrap(std::string name);

		/* Destructor */
		virtual ~DiamondTrap();

		/* Copy constructor */
		DiamondTrap(const DiamondTrap &);

		/* Operation overload = */
		DiamondTrap& operator = (const DiamondTrap& e);

		// Methods
		void	whoAmI();
		using	ClapTrap::attack;

	private:
		std::string _name;
};

#endif // DIAMONDTRAP_HPP