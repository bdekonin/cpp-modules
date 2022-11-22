/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/11/02 16:22:09 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/11/02 16:22:10 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ShrubberyCreationForm_hpp
#define ShrubberyCreationForm_hpp

#include "Form.hpp"
#include <string>

class  ShrubberyCreationForm : public Form
{
    public:
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
		void	executeTarget() const;

	private:
		ShrubberyCreationForm();
};

#endif
