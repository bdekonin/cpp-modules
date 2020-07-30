/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 16:50:40 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 20:46:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

int main()
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}