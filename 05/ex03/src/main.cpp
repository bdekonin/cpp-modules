#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
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
		Intern andy;
		Bureaucrat	bob("Bob", 40);
		Bureaucrat	minister("Minister", 5);
		
		std::cout << "\nTest with robot form:\n" << std::endl;
		Form *myform = andy.makeForm("robotomy request", "Bender");
		signAndExecuteForm(*myform, minister, bob);
		delete (myform);

		std::cout << "\nTest with invalid form:\n" << std::endl;
		myform = andy.makeForm("thisFormDoesNotExist", "targetDoesNotMatter");
		signAndExecuteForm(*myform, minister, bob);
		delete (myform);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
