/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:21:50 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 16:27:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon &weaponClass);
		void	attack();
	private:
		Weapon &m_weapon;
		std::string name;
};

#endif // HUMANA_HPP