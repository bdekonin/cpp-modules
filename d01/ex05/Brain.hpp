/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:36:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 20:44:52 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
/*
** Standard Library's
*/
# include <iostream>
# include <string>
# include <sstream>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		void		setAddress(void);
		std::string getAddress(void);
		std::string identify(void);
	private:
		std::string _address;

};

#endif