/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:21:40 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::~Form()
{
}

Form::Form() :
	_signed(false),
	_name("Form"),
	_requiredSignGrade(LOWEST_GRADE),
	_requiredExecuteGrade(LOWEST_GRADE)
{
}

Form::Form(int signGrade, int executeGrade) :
	_signed(false),
	_name("Form"),
	_requiredSignGrade(signGrade),
	_requiredExecuteGrade(executeGrade)
{
	if (this->getRequiredSignGrade() < HIGHEST_GRADE)
		throw (GradeTooHighException());
	if (this->getRequiredSignGrade() > LOWEST_GRADE)
		throw (GradeTooLowException());

	if (this->getRequiredExecuteGrade() < HIGHEST_GRADE)
		throw (GradeTooHighException());
	if (this->getRequiredExecuteGrade() > LOWEST_GRADE)
		throw (GradeTooLowException());
}

Form::Form(const Form& src) :
	_name(src.getName()),
	_requiredSignGrade(src.getRequiredSignGrade()),
	_requiredExecuteGrade(src.getRequiredExecuteGrade())
{
	*this = src;
}

Form&	Form::operator=(const Form& src)
{
	this->_signed = src.getSigned();
	return (*this);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

const std::string&	Form::getName() const
{
	return (this->_name);
}

int	Form::getRequiredSignGrade() const
{
	return (this->_requiredSignGrade);
}

int		Form::getRequiredExecuteGrade() const
{
	return (this-> _requiredExecuteGrade);
}

void	Form::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() > this->getRequiredSignGrade())
		throw (GradeTooLowException());
	this->_signed = true;
}

std::ostream &operator<<(std::ostream& out, const Form& f)
{
	out << "form name: [" << f.getName() << "] ";
	out << "signed: [" << f.getSigned() << "] ";
	out << "signGrade: [" << f.getRequiredSignGrade() << "] ";
	out << "execGrade: [" << f.getRequiredExecuteGrade() << "] ";
	return (out);
}
