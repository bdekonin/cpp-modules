/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/18 16:12:16 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 16:13:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/* Constructor */
WrongCat::WrongCat()
: WrongAnimal("WrongCat")
{
}

/* Destructor */
WrongCat::~WrongCat()
{
}

/* Copy constructor */
WrongCat::WrongCat(const WrongCat &e)
: WrongAnimal(e)
{
}

/* Operation overload = */
WrongCat &WrongCat::operator = (const WrongCat &e)
{
	this->_type = e._type;
	return *this;
}