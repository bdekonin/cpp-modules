/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 17:02:13 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/29 08:18:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	setAddress();
}
Brain::~Brain(void)
{
}

void
Brain::setAddress(void)
{
    std::stringstream   buff;

    buff << this;
    this->_address = buff.str();
    return ;
}

std::string
Brain::getAddress(void)
{
    return (this->_address);
}

std::string
Brain::identify(void)
{
    return (this->getAddress());
}
