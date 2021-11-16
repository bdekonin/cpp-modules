/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 08:25:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/11/16 13:12:20 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>


// int main()
// {
// 	MutantStack<int> mstack;

// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;

// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;

// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);

// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;

// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);

// 	std::cout << "\nNow with amazing vector strings\n-------------------------------------------------" << std::endl;
// 	MutantStack<std::string, std::vector<std::string> > sstack;
// 	sstack.push("WOW");
// 	sstack.push("this");
// 	sstack.push("actually");
// 	sstack.push("works");
// 	for (MutantStack<std::string, std::vector<std::string> >::iterator itr = sstack.begin(); itr != sstack.end(); itr++)
// 		std::cout << *itr << " ";
// 	std::cout << std::endl;

// 	std::cout << "\nNow with amazing list doubles\n-------------------------------------------------" << std::endl;

// 	MutantStack<double, std::list<double> > dstack;
// 	dstack.push(3.1415926);
// 	dstack.push(4.12);
// 	dstack.push(3.15);
// 	dstack.push(4.8);
// 	for (MutantStack<double, std::list<double> >::iterator itr = dstack.begin(); itr != dstack.end(); itr++)
// 		std::cout << *itr << " ";
// 	std::cout << std::endl;
// }



int main()
{
	MutantStack<int> mstack;

	std::stack<int, std::list<int>> stack;

	stack.push(2);

	
		
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> s(mstack);
	std::cout << mstack.size() << "/" << s.size() << std::endl;
	while (!s.empty())
		s.pop();
	std::cout << "Size: " << s.size() << std::endl;
	for (int i = 0; i < 10; i++)
		s.push(i * 2);
	it = s.begin();
	while (it != s.end())
		std::cout << *(it++) << " - ";
	std::cout << std::endl;
	return (0);
}