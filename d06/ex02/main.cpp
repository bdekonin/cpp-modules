/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/07 11:50:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/07 16:58:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate()
{
	Base	*ptr = NULL;

	std::cout << "Generate a random char out of: (A,B,C)" << std::endl;
	unsigned char ran = 'A' + arc4random_uniform(3);
	std::cout << "The random char is: " << ran << "!" << std::endl;

	if (ran == 'A')
	{
		ptr = new A;
	}
	else if (ran == 'B')
	{
		ptr = new B;
	}
	else if (ran == 'C')
	{
		ptr = new C;
	}
	else
	{
		std::cout << "Something terrible just happened!" << std::endl;
		exit(EXIT_FAILURE);
	}
	std::cout << "generate(): ptr was initialized as:  " << ran << std::endl;
	return (ptr);
}

void	identify(Base& ptr)
{
	std::cout << "identify(): &ptr: ";
	try
	{
		A& a = dynamic_cast<A&>(ptr);
		std::cout << "A" << std::endl;
		(void)a;
		return;
	}
	catch(const std::bad_cast&)
	{
	}
	try
	{
		B& b = dynamic_cast<B&>(ptr);
		std::cout << "B" << std::endl;
		(void)b;
		return;
	}
	catch(const std::bad_cast&)
	{
	}
	try
	{
		C& c = dynamic_cast<C&>(ptr);
		std::cout << "C" << std::endl;
		(void)c;
		return;
	}
	catch(const std::bad_cast&)
	{
	}
	std::cout << "Something terrible just happened!" << std::endl;
}

void	identify(Base* ptr)
{
	std::cout << "identify(): *ptr: ";
	A* a = dynamic_cast<A*>(ptr);
	if (a)
	{
		std::cout << "A" << std::endl;
		return;
	}
	B* b = dynamic_cast<B*>(ptr);
	if (b)
	{
		std::cout << "B" << std::endl;
		return;
	}
	C* c = dynamic_cast<C*>(ptr);
	if (c)
	{
		std::cout << "C" << std::endl;
		return;
	}
	std::cout << "Something terrible just happened!" << std::endl;
}

int main() 
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	return 0;
}