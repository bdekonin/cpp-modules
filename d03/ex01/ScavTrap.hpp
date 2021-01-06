/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/05 13:12:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <string>
#include <iostream>

class ScavTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &obj);
		~ScavTrap(void);
		void 			rangedAttack(std::string const &target);
		void 			meleeAttack(std::string const &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		void			challengeNewcomer(void);
		void			status(void);
	private:
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