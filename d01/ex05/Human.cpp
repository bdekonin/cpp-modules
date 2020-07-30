/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:53:33 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 20:14:37 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void)
{
}

Human::~Human(void)
{
}

Brain Human::getBrain(void)
{
	return (this->m_brain);
}

std::string Human::identify(void)
{
	return (this->m_brain.identify());
}