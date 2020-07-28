/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/27 22:20:57 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 09:13:18 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>


class Pony
{
	public:
		Pony(void);
		~Pony(void);
		void			setColor(std::string color);
		void			setName(std::string color);
		std::string		getColor(void);
		std::string		getName(void);
	private:
		std::string name;
		std::string color;
};

void ponyOnTheStack(void);
void ponyOnTheHeap(void);

#endif