/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/04 13:07:30 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/04 21:36:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>

class FragTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &obj);
		~FragTrap(void);
		void 			rangedAttack(std::string const &target);
		void 			meleeAttack(std::string const &target);
		void 			takeDamage(unsigned int amount);
		void 			beRepaired(unsigned int amount);
		void			vaulthunter_dot_exe(std::string const & target);
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