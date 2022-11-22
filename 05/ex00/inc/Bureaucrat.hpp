/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:14 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:21:16 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
