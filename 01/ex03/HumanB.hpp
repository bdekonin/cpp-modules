/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:54:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:59:09 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public:
		/* Constructor  */
		HumanB(std::string name);

		/* Destructor */
		virtual ~HumanB();

		// Methods
		void attack();
		void setWeapon(Weapon &weapon); // only for HumanB
	private:
		Weapon *_weapon;
		std::string _name;
};

#endif // HUMANB_HPP