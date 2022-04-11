/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/08 15:11:21 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/23 17:59:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		/* Constructor  */
		Form();
		Form(std::string const &name, int gradeToSign, int gradeToExecute);

		/* Destructor */
		virtual ~Form();

		/* Copy constructor */
		Form(const Form&);

		/* Operation overload = */
		Form& operator = (const Form& e);

		// Methods
		std::string getName() const;
		bool		getSigned() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void 		beSigned(Bureaucrat &b);
		virtual void		execute(Bureaucrat const & executor) const;

		/* Exceptions */
		class GradeTooHighException : public std::exception // Grade 1 Highest
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception // Grade 150 Lowest
		{
			public:
				virtual const char* what() const throw();
		};
		class FormNotSignedException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		// virtual void execute(Bureaucrat const & executor) const = 0;
	private:
		std::string const _name;
		bool _signed;
		int const _gradeToSign;
		int const _gradeToExecute;
	protected:
		std::string	_target;
};

/* Operation Overload << */
std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif // FORM_HPP


