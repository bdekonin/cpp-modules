/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:23 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:28:00 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

static void	bureaucrat_init_too_low()
{
	try
	{
		std::cout << "init bureaucrat at 165 (invalid): ";
		Bureaucrat bureaucrat("bureaucrat", 165);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	bureaucrat_init_too_high()
{
	try
	{
		std::cout << "init bureaucrat at 0 (invalid): ";
		Bureaucrat bureaucrat("bureaucrat", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	incremement_to_invalid()
{
	try
	{
		Bureaucrat bob("bob", 3);
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
		bob.incrementGrade();
		std::cout << bob << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}	
}

static void	decremement_to_invalid()
{
	try
	{
		Bureaucrat rowan("rowan", 149);
		std::cout << rowan << std::endl;
		rowan.decrementGrade();
		std::cout << rowan << std::endl;
		rowan.decrementGrade();
		std::cout << rowan << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	std::cout << "\nincrement/decrement test:\n" << std::endl;
	decremement_to_invalid();
	incremement_to_invalid();

	std::cout << "\nbureaucrat initialization:\n" << std::endl;
	bureaucrat_init_too_high();
	bureaucrat_init_too_low();
	return (0);
}
