/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 13:15:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 13:40:35 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <string>
#include <iostream>

class FragTrap : public ClapTrap
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
		void highFivesGuys(void);
	private:
		// ...
};

#endif // FRAGTRAP_HPP