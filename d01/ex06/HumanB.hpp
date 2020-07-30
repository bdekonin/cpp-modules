/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:21:50 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 17:53:23 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		void	attack();
		void	setWeapon(Weapon &weapon); // only for HumanB
	private:
		Weapon *m_weapon;
		std::string m_name;
};

#endif // HUMANB_HPP