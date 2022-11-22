/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:42 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:28:15 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

static void	bureaucrat_init_error()
{
	try
	{	
		Bureaucrat b1("bob", 600);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	form_init_error()
{
	try
	{
		Form permit(999, 999);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	sign_form_success()
{
	try
	{
		Bureaucrat president("president", 1);
		std::cout << president << std::endl;
		Form formA(1, 10);
		std::cout << formA << std::endl;
		president.signForm(formA);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

static void	sign_form_failure()
{
	try
	{
		Bureaucrat assistent("assistent", 140);
		std::cout << assistent << std::endl;
		Form formB(100, 120);
		std::cout << formB << std::endl;
		assistent.signForm(formB);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int	main(void)
{
	std::cout << "\ninit a bureaucrat (invalid)\n" << std::endl;
	bureaucrat_init_error();

	std::cout << "\ninit a form (invalid)\n" << std::endl;
	form_init_error();
	
	std::cout << "\nsign a form (success)\n" << std::endl;
	sign_form_success();

	std::cout << "\nsign a form (failure)\n" << std::endl;
	sign_form_failure();

	return (0);
}
