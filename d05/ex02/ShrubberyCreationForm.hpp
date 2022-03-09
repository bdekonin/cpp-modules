/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/09 13:57:49 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/09 14:01:06 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
	/* Constructors */
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const &name, int gradeToSign, int gradeToExecute);

	/* Copy Constructor */
		ShrubberyCreationForm(const ShrubberyCreationForm& e);
		
	/* Destructor */
		~ShrubberyCreationForm();

	/* Operation overload = */
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& e);
	
	/* Methods */
		void					execute(Bureaucrat const & executor) const;
	private:
		std::string				_target;
};

#endif // SHRUBBERYCREATIONFORM_HPP