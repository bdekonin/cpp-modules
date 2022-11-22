#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat() :
	_name("")
{
	this->setGrade(LOWEST_GRADE);
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) :
	_name(name)
{
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) :
	_name(src.getName())
{
	*this = src;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	this->_grade = src.getGrade();
	return (*this);
}

const std::string&	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int newGrade)
{
	if (newGrade < HIGHEST_GRADE)
		throw (GradeTooHighException());
	if (newGrade > LOWEST_GRADE)
		throw (GradeTooLowException());
	this->_grade = newGrade;
}

void	Bureaucrat::incrementGrade()
{
	this->setGrade(this->_grade - 1);
}

void	Bureaucrat::decrementGrade()
{
	this->setGrade(this->_grade + 1);
}

void	Bureaucrat::signForm(Form& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;				
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because: " << e.what() << ". (" << this->getName() << " has a signing grade of " << this->getGrade() << ", but " << form.getRequiredSignGrade() << " was needed.)" << std::endl;
	}
}

void	Bureaucrat::executeForm(const Form& form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << " for: " << form.getTarget() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cout << this->getName() << " cannot execute " << form.getName() << " for: " << form.getTarget() << ". Reason: " << e.what() << std::endl;
	}
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat - grade: " << bureaucrat.getGrade();
	return (out);
}
