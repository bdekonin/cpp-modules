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
