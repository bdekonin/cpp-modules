/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:13:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 11:41:51 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <string>
#include "Zombie.hpp"

class ZombieEvent
{
	public:
		// ZombieEvent(void);
		// ~ZombieEvent(void);
		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		Zombie			*randomChump(void);
	private:
		std::string  m_type;
};

#endif