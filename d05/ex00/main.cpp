/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/21 17:39:52 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/08 14:30:27 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	temp("Rowan", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat	bob("bob", 150);
	try
	{
		bob.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat	gert("gert", 1);
	try
	{
		gert.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << bob << std::endl;

	Bureaucrat	lars("lars", 1);
	std::cout << lars << std::endl;
	lars.decrementGrade();
	std::cout << lars << std::endl;
	
	return 0;
}