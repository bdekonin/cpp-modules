/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:00 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;

class Form
{
	public:
		virtual ~Form();
		Form(const std::string& name, const std::string& target, int signGrade, int executeGrade);
		Form(const Form&);
		Form&	operator=(const Form&);

		bool				getSigned() const;
		const std::string&	getTarget() const;
		const std::string&	getName() const;
		int					getRequiredSignGrade() const;
		int					getRequiredExecuteGrade() const;

		void				beSigned(const Bureaucrat&);
		void				execute(const Bureaucrat& executor) const;
		virtual void		executeTarget() const = 0;

	private:
		Form();
		bool				_signed;
		const std::string	_target;
		const std::string	_name;
		const int			_requiredSignGrade;
		const int			_requiredExecuteGrade;

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
	class	FormNotSignedException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("form is not signed");
			}
	};
	class	SignGradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("grade is not high enough to sign form");
			}
	};
	class	ExecuteGradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("grade is not high enough to execute form");
			}
	};
};

std::ostream &operator<<(std::ostream&, const Form&);

#endif
