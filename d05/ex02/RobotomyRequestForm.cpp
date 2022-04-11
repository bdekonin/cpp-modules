/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 17:24:29 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/23 17:38:03 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/* Constructors */
RobotomyRequestForm::RobotomyRequestForm()
: Form("RobotomyRequestForm", 72, 45)
{
	this->_target = "";
	return ;
}
RobotomyRequestForm::RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	return ;
}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

/* Copy constructor */
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& e)
: Form(e)
{
	return ;
}

/* Operation overload = */
RobotomyRequestForm& RobotomyRequestForm::operator = (const RobotomyRequestForm& e)
{
	Form::operator = (e);
	return *this;
}

/* Methods */
void	RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << "RobotomyRequestForm: TRR TRR DRILLING NOISES..." << std::endl;
	
	if (rand() % 2 == 0)
		std::cout << "RobotomyRequestForm: " << this->_target << " has been robotomized successfully." << std::endl;
	else
		std::cout << "RobotomyRequestForm: " << this->_target << " has been robotomized unsuccessfully." << std::endl;
}