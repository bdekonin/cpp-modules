/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/21 13:17:59 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/08 15:10:51 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Constructor */
Bureaucrat::Bureaucrat()
: _name("Bureaucrat"), _grade(150)
{
	std::cout << "[Bureaucrat] " << this->_name << " default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(std::string name, int grade)
: _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade = grade;
	std::cout << "[Bureaucrat] " << this->_name << " constructor called" << std::endl;
}

/* Destructor */
Bureaucrat::~Bureaucrat()
{
	std::cout << "[Bureaucrat] " << this->_name << " destructor called" << std::endl;
}

/* Copy constructor */
Bureaucrat::Bureaucrat(const Bureaucrat &e)
: _name(e._name)
{
	*this = e;
	std::cout << "[Bureaucrat] " << this->_name << " copy constructor called" << std::endl;
}

/* Operation overload = */
Bureaucrat& Bureaucrat::operator = (const Bureaucrat &e)
{
	// this->_name = e._name; // its a const so it cannot be changed
	this->_grade = e._grade;
	return (*this);
}

/* Operation Overload << */
std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}

/* Exceptions */
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception: Grade is too high");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception: Grade is too low");
}

/* Methods */
std::string Bureaucrat::getName() const
{
	return (this->_name);
}
int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooLowException();
}
void	Bureaucrat::decrementGrade()
{
	if (this->_grade < 150)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooHighException();
}
