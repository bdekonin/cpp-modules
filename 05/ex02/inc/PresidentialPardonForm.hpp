/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:03 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:04 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PresidentialPardonForm_hpp
#define PresidentialPardonForm_hpp

#include "Form.hpp"
#include <string>

class PresidentialPardonForm : public Form
{
	public:
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
		void	executeTarget() const;

	private:
		PresidentialPardonForm();
};

#endif
