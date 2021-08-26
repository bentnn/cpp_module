#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULE_PRESIDENTIALPARDONFORM_HPP


#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class Form;

class PresidentialPardonForm : public Form {
public:
	PresidentialPardonForm(std::string target);
	void execute(Bureaucrat const & executor) const;
};


#endif
