/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 19:13:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:08:57 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		/* Constructor  */
		Character();
		Character(std::string name);

		/* Destructor */
		virtual ~Character();

		/* Copy constructor */
		Character(const Character &e);

		/* Operation overload = */
		Character& operator = (const Character& e);

		// Methods
		std::string const & getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif // CHARACTER_HPP