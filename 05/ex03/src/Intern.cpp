#include "Intern.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>
#include <iostream>

Intern::~Intern()
{
}

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern& Intern::operator=(const Intern& src)
{
	(void)src;
	return (*this);
}

Form	*Intern::makeForm(const std::string& name, const std::string& target)
{
	Form		*form = NULL;
	const int	amountKnownForms = 3;
	int			number = -1;
	std::string	lowerCaseString = name;

	for (size_t i = 0; i < lowerCaseString.length(); i++)
		lowerCaseString[i] = std::tolower(lowerCaseString[i]);
	const char *formNames[amountKnownForms] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	for (int i = 0; i < amountKnownForms; i++)
	{
		if (lowerCaseString == formNames[i])
		{
			number = i;
			break;
		}
	}
	if (number < 0)
		throw (UnknownForm());
	switch (number)
	{
		case 0: form = new ShrubberyCreationForm(target);
				break;
		case 1: form = new RobotomyRequestForm(target); 
				break;
		case 2: form = new PresidentialPardonForm(target); 
				break;
	}
	std::cout << "Intern creates " << form->getName() << " for target: " << form->getTarget() << std::endl;
	return (form);
}
