/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 13:15:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/10 16:00:24 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		/* Constructor  */
		FragTrap();
		FragTrap(std::string name);

		/* Destructor */
		virtual ~FragTrap();

		/* Copy constructor */
		FragTrap(const FragTrap&);

		/* Operation overload = */
		FragTrap& operator = (const FragTrap& e);
		
		// Methods
		void attack(std::string const &target);
		void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP