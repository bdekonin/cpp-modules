/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/03 14:49:56 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/12/03 15:12:34 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	Karen karen;

	if (argc != 2)
	{
		std::cout << "You have to send [./karenFilter] [Level]" << std::endl;
		return (1);
	}
	karen.complain(argv[1]);
	return (0);
}