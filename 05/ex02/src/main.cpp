/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:22 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

static void	signAndExecuteForm(Form& form, const Bureaucrat& signer, const Bureaucrat& executor)
{
	try
	{
		signer.signForm(form);
		executor.executeForm(form);
	}
	catch (const std::exception& e)
	{
		std::cerr << "Cannot execute " << form.getName() << " for: " << form.getTarget() << ". Reason: " << e.what() << std::endl;
	}
}

int main(void)
{
	try
	{
		Bureaucrat	bob("Bob", 40);
		Bureaucrat	minister("Minister", 5);

		std::cout << "\nCreate ShrubberyForm\n" << std::endl;
		ShrubberyCreationForm	home("home");
		signAndExecuteForm(home, minister, bob);

		std::cout << "\nCreate RobotForm\n" << std::endl;
		RobotomyRequestForm		robot("robot15a");
		signAndExecuteForm(robot, minister, bob);

		std::cout << "\nCreate PardonForm and fail to exec\n" << std::endl;
		PresidentialPardonForm	pardonLars("Lars");
		signAndExecuteForm(pardonLars, minister, bob);
	
		std::cout << "\nCreate PardonForm and succeed\n" << std::endl;
		PresidentialPardonForm	pardonLars2("Lars");
		signAndExecuteForm(pardonLars2, minister, minister);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
