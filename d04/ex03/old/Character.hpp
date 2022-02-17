/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/31 18:41:19 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/01 21:21:49 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		/* Constructor  */
		Character()
		: _slotSize(0);
		{
			this->slots = new AMateria*[4]
		}

		/* Destructor */
		~Character();

		/* Copy constructor */
		Character(const Character &e);

		/* Operation overload = */
		Character& operator = (const Character &e);

		// Methods
		void equip(AMateria *m)
		{
			
		}
	private:
		AMateria	**_slots;
		int			_slotSize;
};

#endif // CHARACTER_HPP