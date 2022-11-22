/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:06 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:07 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RobotomyRequestForm_hpp
#define RobotomyRequestForm_hpp

#include "Form.hpp"
#include <string>

class  RobotomyRequestForm : public Form
{
	public:
		virtual ~RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
		void	executeTarget() const;

	private:
		RobotomyRequestForm();
};

#endif
