/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 12:43:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 13:07:55 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie* newZombie = new Zombie(name);

    return (newZombie);
}
