/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 19:13:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/17 20:52:36 by bdekonin      ########   odam.nl         */
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
		Character()
		: _name("")
		{
		}
		Character(std::string name)
		: _name(name)
		{
		}

		/* Destructor */
		virtual ~Character()
		{
			for (int i = 0; i < 4; i++)
			{
				if (_inventory[i])
					delete _inventory[i];
			}
		}

		/* Copy constructor */
		Character(const Character &e)
		{
			*this = e;
		}

		/* Operation overload = */
		Character& operator = (const Character& e)
		{
			_name = e._name;
			for (int i = 0; i < 4; i++)
			{
				if (_inventory[i])
					delete _inventory[i];
			}
			for (int i = 0; i < 4; i++)
				_inventory[i] = e._inventory[i]->clone();
			return *this;
		}

		// Methods
		std::string const & getName() const
		{
			return _name;
		}
		void equip(AMateria *m)
		{
			if (m == NULL)
				return ;
			for (int i = 0; i < 4; i++)
			{
				if (this->_inventory[i] == NULL)
				{
					this->_inventory[i] = m;
					return ;
				}
			}
			std::cout << this->_name << " is full." << std::endl;
		}
		void unequip(int idx)
		{
			if (idx < 0 || idx > 4)
				return ;
			this->_inventory[idx] = NULL;
		}
		void use(int idx, ICharacter &target)
		{
			if (idx < 0 || idx > 4)
				return ;
			if (this->_inventory[idx] == NULL)
				return ;
			this->_inventory[idx]->use(target);
		}
	private:
		std::string _name;
		AMateria *_inventory[4];
};

#endif // CHARACTER_HPP