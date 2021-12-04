/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 13:27:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 15:36:14 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &obj);
		ClapTrap(std::string name);
		~ClapTrap(void);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void status(void);
	protected:
		int 			_hitPoints;
		int 			_hitPointsMax;
		int 			_energyPoints;
		int 			_energyPointsMax;
		int 			_level;
		std::string		_name;
		int 			_meleeDamageAttack;
		int 			_rangeDamageAttack;
		int 			_armorDamageReduction;
};

#endif