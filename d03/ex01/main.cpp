/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/04 10:42:01 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/08 14:22:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 4)
	{
		std::cout << "./a.out [Name] [Enemy] [Repair] [Damage]" << std::endl;
		return (0);
	}
	ClapTrap robot(argv[1]);

	robot.attack(argv[2]);

	robot.beRepaired(atoi(argv[3]));
	robot.takeDamage(atoi(argv[4]));
	(void)argc;
}