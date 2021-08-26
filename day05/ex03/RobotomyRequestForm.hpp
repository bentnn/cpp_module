#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULE_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class Form;

class RobotomyRequestForm : public Form {
public:
	RobotomyRequestForm(std::string target);
	void execute(Bureaucrat const & executor) const;
};


#endif
