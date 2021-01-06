/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/05 23:08:49 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/01/06 17:30:08 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>

class Sorcerer
{
	public:
		Sorcerer(std::string name);
		~Sorcerer(void);
	private:
		std::ostream &operator <<(std::ostream &output, const Sorcerer &s);
		std::string 	_name;
		std::string		_type;
};
#endif