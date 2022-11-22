/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:49:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:54:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public:
		/* Constructor  */
		HumanA(std::string name, Weapon &weapon);

		/* Destructor */
		virtual ~HumanA();

		// Methods
		void attack();
	private:
		Weapon &_weapon;
		std::string _name;
};

#endif // HUMANA_HPP