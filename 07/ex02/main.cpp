/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:59:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/26 14:27:31 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template<typename T>
void print(Array<T> const list)
{
	// list[0] = 500;
	for (int i = 0; i < (int)list.size(); i++)
		std::cout << list[i] << std::endl;
}

int main(int, char**)
{
	Array<int> list(10);
	
	for (int i = 0; i < (int)list.size(); i++)
		list[i] = i;

	print(list);
}
