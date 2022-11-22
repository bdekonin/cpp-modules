/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 07:22:46 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 09:09:38 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void memoryLeak()
{
	std::string* panther = new std::string("String panther");

	std::cout << *panther << std::endl;
	delete panther; // delete == free()
}
