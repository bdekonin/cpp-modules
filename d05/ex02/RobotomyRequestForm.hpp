/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/23 17:23:52 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/03/23 17:59:47 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <iostream>

class RobotomyRequestForm : public Form
{
	public:
		/* Constructor  */
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);

		/* Destructor */
		virtual ~RobotomyRequestForm();

		/* Copy constructor */
		RobotomyRequestForm(const RobotomyRequestForm&);

		/* Operation overload = */
		RobotomyRequestForm& operator = (const RobotomyRequestForm& e);

		// Methods
		virtual void execute(Bureaucrat const & executor) const;
};

#endif // ROBOTOMYREQUESTFORM_HPP