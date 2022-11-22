/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:27 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:28 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

static const int requiredSignGrade = 72;
static const int requiredExecGrade = 45;

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm() :
	Form("RobotomyRequestForm", "", requiredSignGrade, requiredExecGrade)
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	Form("RobotomyRequestForm", target, requiredSignGrade, requiredExecGrade)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) :
	Form(src.getName(), src.getTarget(), requiredSignGrade, requiredExecGrade)
{
	*this = src;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	(void)src;
	return (*this);
}

void	RobotomyRequestForm::executeTarget() const
{
	std::cout << "* Some drilling noises *" << std::endl;
	unsigned int ran = arc4random_uniform(2);

	if (ran)
	{
		std::cout << this->getTarget() << " has been robotomized successfully!" << std::endl;
	}
	else
	{
		std::cout << "Failure! " << this->getTarget() << " was not robotomized!" << std::endl;
	}
}
