#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

static const int requiredSignGrade = 145;
static const int requiredExecGrade = 137;

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("ShrubberyCreationForm", "", requiredSignGrade, requiredExecGrade)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
	Form("ShrubberyCreationForm", target, requiredSignGrade, requiredExecGrade)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) :
	Form(src.getName(), src.getTarget(), requiredSignGrade, requiredExecGrade)
{
	*this = src;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	(void)src;
	return (*this);
}

void	ShrubberyCreationForm::executeTarget() const
{
	std::ofstream	ofs;
	std::string		targetFileName = this->getTarget() + "_shrubbery";

	ofs.open(targetFileName);
	if (!ofs)
		throw std::runtime_error("open error");
	ofs << "ASCII TREES";
	ofs.close();
	std::cout << "Created a file called '" << targetFileName << "'" << std::endl;
}
