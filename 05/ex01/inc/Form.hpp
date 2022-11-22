/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:21:31 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:21:32 by bdekonin      ########   odam.nl         */
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
		Form();
		Form(int signGrade, int executeGrade);
		Form(const Form&);
		Form&	operator=(const Form&);

		bool				getSigned() const;
		const std::string&	getName() const;
		int					getRequiredSignGrade() const;
		int					getRequiredExecuteGrade() const;

		void				beSigned(const Bureaucrat&);

	private:
		bool				_signed;
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
};

std::ostream &operator<<(std::ostream&, const Form&);

#endif
