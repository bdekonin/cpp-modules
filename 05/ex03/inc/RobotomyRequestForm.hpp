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
