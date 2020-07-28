/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 09:40:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 11:12:57 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void			announce(void);
	private:
		std::string		m_type;
		std::string		m_name;
};

#endif
