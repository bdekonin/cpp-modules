#ifndef intern_hpp
#define intern_hpp

#include <string>
#include "Form.hpp"

class Intern
{
	public:
		~Intern();
		Intern();
		Intern(const Intern&);
		Intern& operator=(const Intern&);
		Form*	makeForm(const std::string& name, const std::string& target);

	private:
	class	UnknownForm : public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Unknown form given to intern");
			}
	};

};

#endif
