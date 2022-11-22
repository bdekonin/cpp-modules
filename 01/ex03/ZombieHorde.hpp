/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 12:39:16 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 14:37:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	public:
		ZombieHorde(int N);
		~ZombieHorde(void);
	private:
        Zombie	*m_zombies;
};

std::string randomName(int N);
std::string randomType(int N);
#endif
