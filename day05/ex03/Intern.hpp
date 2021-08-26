#ifndef CPP_MODULE_INTERN_HPP
#define CPP_MODULE_INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class PresidentialPardonForm;
class ShrubberyCreationForm;
class RobotomyRequestForm;

class Intern {
	typedef Form*(Intern::*func)(std::string);
public:
	Intern();
	Intern(Intern const &a);
	~Intern();
	Intern &operator=(Intern const &a);
	Form *makeForm(std::string type, std::string target);
	Form *makePresidentialPardonForm(std::string target);
	Form *makeShrubberyCreationForm(std::string target);
	Form *makeRobotomyRequestForm(std::string target);
	Form *makeNull(std::string target);
private:
	func array[4];
};


#endif
