/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:24 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:25 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

static const int requiredSignGrade = 25;
static const int requiredExecGrade = 5;

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm() :
	Form("PresidentialPardonForm", "", requiredSignGrade, requiredExecGrade)
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	Form("PresidentialPardonForm", target, requiredSignGrade, requiredExecGrade)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) :
	Form(src.getName(), src.getTarget(), requiredSignGrade, requiredExecGrade)
{
	*this = src;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	(void)src;
	return (*this);
}

void	PresidentialPardonForm::executeTarget() const
{
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
