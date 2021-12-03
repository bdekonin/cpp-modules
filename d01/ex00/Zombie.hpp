/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 12:35:14 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 16:26:11 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		/* Constructor  */
		Zombie(std::string name);

		/* Destructor */
		virtual ~Zombie();

		// Methods
		void announce();
	private:
		std::string _name;
};

void 	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif // ZOMBIE_HPP