#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

Form::~Form()
{
}

Form::Form() :
	_signed(false),
	_target(""),
	_name("Form"),
	_requiredSignGrade(LOWEST_GRADE),
	_requiredExecuteGrade(LOWEST_GRADE)
{
}

Form::Form(const std::string& name, const std::string& target, int signGrade, int executeGrade) :
	_signed(false),
	_target(target),
	_name(name),
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
	_target(src.getTarget()),
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

const std::string&	Form::getTarget() const
{
	return (this->_target);
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
		throw (SignGradeTooLowException());
	this->_signed = true;
}

void	Form::execute(const Bureaucrat& executor) const
{
	if (!this->getSigned())
		throw (FormNotSignedException());
	if (executor.getGrade() > this->getRequiredExecuteGrade())
		throw (ExecuteGradeTooLowException());
	this->executeTarget();
}

std::ostream &operator<<(std::ostream& out, const Form& f)
{
	out << "signed: [" << f.getSigned() << "] ";
	out << "target: [" << f.getTarget() << "] ";
	out << "name: [" << f.getName() << "] ";
	out << "signGr: [" << f.getRequiredSignGrade() << "] ";
	out << "execGr: [" << f.getRequiredExecuteGrade() << "] ";
	return (out);
}
