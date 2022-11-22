#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

#define HIGHEST_GRADE 1
#define LOWEST_GRADE 150

class Bureaucrat
{
	public:
		virtual ~Bureaucrat();
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat&);
		Bureaucrat& operator=(const Bureaucrat&);
	
		const std::string&	getName() const;
		int					getGrade() const;
		void				setGrade(int newGrade);
		void				incrementGrade();
		void				decrementGrade();
		void				signForm(Form&) const;
		void				executeForm(const Form&) const;

	private:
		const std::string	_name;
		int					_grade;
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("grade too high");
				}
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("grade too low");
				}
		};
};

std::ostream &operator<<(std::ostream&, const Bureaucrat&);

#endif
