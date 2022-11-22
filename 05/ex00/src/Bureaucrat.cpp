/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:20 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:21:21 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
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

std::ostream &operator<<(std::ostream& out, const Bureaucrat& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat - grade: " << bureaucrat.getGrade();
	return (out);
}
