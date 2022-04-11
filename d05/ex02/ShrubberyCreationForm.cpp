/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 12:14:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/23 18:01:41 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"
# include <fstream>
# include <iostream>

/* Constructor  */
ShrubberyCreationForm::ShrubberyCreationForm()
: Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = "";
	return ;
}
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	return ;
}

/* Destructor */
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

/* Copy constructor */
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& e)
: Form(e)
{
	return ;
}

/* Operation overload = */
ShrubberyCreationForm& ShrubberyCreationForm::operator = (const ShrubberyCreationForm& e)
{
	Form::operator = (e);
	return *this;
}

/* Methods */
void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::fstream file;

	file.open(this->_target + "_shrubbery", std::fstream::out);
	if(file.is_open())
	{
		file << "       _-_ " << std::endl;
		file << "    /~~   ~~\\ " << std::endl;
		file << " /~~         ~~\\ " << std::endl;
		file << "{               } " << std::endl;
		file << " \\  _-     -_  / " << std::endl;
		file << "   ~  \\ //  ~ " << std::endl;
		file << "_- -   | | _- _ " << std::endl;
		file << "  _ -  | |   -_ " << std::endl;
		file << "      // \\ " << std::endl;

		file.close();
	}
}
