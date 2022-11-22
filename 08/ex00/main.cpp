/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/02 15:33:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/10/28 12:28:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main(void)
{
	std::list<int>		lst1;

	lst1.push_back(1);
	lst1.push_back(17);
	lst1.push_back(42);
	lst1.push_back(50);
	lst1.push_back(72);

	try 
	{
		if (easyfind(lst1, 129))
			std::cout << "✅: 129 found!" << std::endl;
	}
	catch (std::exception &e)
 	{
		 std::cout << "❌: 129 not found" << std::endl;
	}
	
	std::vector<int>	v1;
	
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);

	try 
	{
		if (easyfind(v1, 30))
			std::cout << "✅: 30 found!" << std::endl;
	}
	catch (std::exception &e)
 	{
		 std::cout << "❌: 30 not found" << std::endl;
	}
	return (0);
}