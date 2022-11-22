/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 13:45:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:54:17 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

class Weapon
{
	public:
		/* Constructor  */
		Weapon(std::string type);

		/* Destructor */
		virtual ~Weapon();
		// Methods
		std::string const &getType() const;
		void setType(std::string type);
	private:
		std::string _type;
};

#endif // WEAPON_HPP