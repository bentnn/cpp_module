#ifndef CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE_SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class Form;

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(std::string target);
	void execute(Bureaucrat const & executor) const;
};


#endif
