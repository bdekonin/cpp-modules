/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:26:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 11:09:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		/* Constructor  */
		ClapTrap();
		ClapTrap(std::string name);

		/* Destructor */
		virtual ~ClapTrap();

		/* Copy constructor */
		ClapTrap(const ClapTrap&);

		/* Operation overload = */
		ClapTrap& operator = (const ClapTrap& e);

		// Methods
		void attack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
	private:
		std::string	_name;
		int			_hitPoints;
		int			_energyPoints;
		int  		_attackDamage;
};

#endif // CLAPTRAP_HPP