/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Data.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/01 13:26:42 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/01 14:47:59 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
	public:
		/* Constructor  */
		Data();
		Data(int num);

		/* Copy constructor */
		Data(const Data&);

		/* Destructor */
		virtual ~Data();

		/* Operation overload = */
		Data& operator = (const Data& e);

		int num;
};

# endif // DATA_HPP