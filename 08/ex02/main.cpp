/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 08:25:04 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/11/26 10:49:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "mutantstack.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <list>


int	main()
{
	std::cout << "\n default test\n-------------------------------------------------" << std::endl;
	
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;

	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
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
	std::stack<int> s(mstack);

	std::cout << "\nvector strings\n-------------------------------------------------" << std::endl;
	MutantStack<std::string, std::vector<std::string> > sstack;
	sstack.push("1");
	sstack.push("2");
	sstack.push("3");
	sstack.push("4");
	for (MutantStack<std::string, std::vector<std::string> >::iterator itr = sstack.begin(); itr != sstack.end(); itr++)
		std::cout << *itr << "\n";

	std::cout << "\nlist double\n-------------------------------------------------" << std::endl;

	MutantStack<double, std::list<double> > dstack;
	dstack.push(1.2);
	dstack.push(2.3);
	dstack.push(4.5);
	dstack.push(5.6);
	for (MutantStack<double, std::list<double> >::iterator itr = dstack.begin(); itr != dstack.end(); itr++)
		std::cout << *itr << "\n";
	std::cout << "\niterators\n-------------------------------------------------" << std::endl;
	{
		MutantStack<int> stack;

		int max = 10;
		for (int i = 0; i < max; i++)
			stack.push(i);
		std::cout << "reverse iterator\n";
		for (MutantStack<int>::reverse_iterator rit = stack.rbegin(); rit != stack.rend(); rit++)
			std::cout << ' ' << *rit << std::endl;
		std::cout << "normal iterator\n";
  		for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); it++)
			std::cout << ' ' << *it << std::endl;
	}
	return (0);
}