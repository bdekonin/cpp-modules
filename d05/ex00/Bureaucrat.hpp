/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/21 12:58:22 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/21 17:43:58 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <exception>
# include <iostream>

class Bureaucrat
{
	public:
		/* Constructor  */
		Bureaucrat();
		Bureaucrat(std::string name, int grade);


		/* Destructor */
		virtual ~Bureaucrat();

		/* Copy constructor */
		Bureaucrat(const Bureaucrat &);

		/* Operation overload = */
		Bureaucrat& operator = (const Bureaucrat& e);

		/* Exceptions */
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		/* Methods */
		std::string		getName() const;
		int				getGrade() const;

		void 			incrementGrade();
		void 			decrementGrade();
	private:
		const std::string		_name;
		int						_grade; // highest 1, lowest 150
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif // BUREAUCRAT_HPP