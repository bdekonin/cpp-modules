/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:47:35 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 14:44:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std::cout << "Zombie Constructor Called" << std::endl;

}

Zombie::~Zombie(void)
{
    std::cout << "Zombie Destructor Called" << std::endl;
    return ;
}

void    Zombie::birthZombie(std::string name, std::string type)
{
    this->m_name = name;
    this->m_type = type;
}

void Zombie::announce(void)
{
    std::cout << "\t<" << this->m_name;
    std::cout << " (" << this->m_type;
    std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
    return ;
}
