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
