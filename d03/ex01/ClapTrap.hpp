/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:26:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/04 10:39:59 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap
{
	public:
		/* Constructor  */
		ClapTrap(std::string name);

		/* Destructor */
		virtual ~ClapTrap();

		/* Copy constructor */
		ClapTrap(const ClapTrap&);

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