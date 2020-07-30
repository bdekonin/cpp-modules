/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 08:19:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 09:38:55 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string name);
		const std::string	&getType();
		void				setType(std::string type);
		void				setWeapon(Weapon &weapon);
	private:
		std::string			type;	
};

#endif