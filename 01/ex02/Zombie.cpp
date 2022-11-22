/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 10:47:35 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 11:30:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
{
    this->m_name = name;
    this->m_type = type;
}

Zombie::~Zombie(void)
{
    std::cout << "Destructor Called" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << "<" << this->m_name;
    std::cout << " (" << this->m_type;
    std::cout << ")> Braiiiiiiinnnssss..." << std::endl;
    return ;
}