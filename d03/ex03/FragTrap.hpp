/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/09 13:15:15 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/09 17:08:01 by bdekonin      ########   odam.nl         */
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
		void highFivesGuys(void);
	private:
		// ...
};

#endif // FRAGTRAP_HPP