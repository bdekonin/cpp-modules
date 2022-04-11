/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 12:13:28 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/23 17:59:49 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		/* Constructor  */
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);

		/* Destructor */
		virtual ~ShrubberyCreationForm();

		/* Copy constructor */
		ShrubberyCreationForm(const ShrubberyCreationForm&);

		/* Operation overload = */
		ShrubberyCreationForm& operator = (const ShrubberyCreationForm& e);

		// Methods
		virtual void execute(Bureaucrat const & executor) const;
};

#endif // SHRUBBERYCREATIONFORM_HPP