/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/02 15:33:02 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/03 14:33:43 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <deque>

# define arrayLength 10
# define maxNumInArray 10
template <typename T>
void print(T &container, int num)
{
	try
	{
		int output = easyfind(container, num);
		std::cout << "✅: " << output << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "❌: " << num << std::endl;
	}	
}
template <typename T>
void tester(int *ints, T &container)
{

	for (int i = 0; i < 10; i++)
		container.push_back(ints[i]);
	print(container, 4);
	print(container, 8);
	print(container, 10);
	print(container, 9);
// 4
// 8
// 10
// 9
}

int main()
{
	int ints[] = {
		8,
		3,
		0,
		6,
		7,
		1,
		2,
		9,
		7,
		5
	};

	
	std::cout << "\ntesting vector:" << std::endl;
	std::vector<int> vector;
	tester(ints, vector);

	std::cout << "\ntesting list:" << std::endl;
	std::list<int> list;
	tester(ints, list);
	
	std::cout << "\ntesting deque:" << std::endl;
	std::deque<int> deque;
	tester(ints, deque);
}