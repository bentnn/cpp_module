#include "Intern.hpp"

Intern::Intern() {
	this->array[0] = &Intern::makeNull;
	this->array[1] = &Intern::makeShrubberyCreationForm;
	this->array[2] = &Intern::makeRobotomyRequestForm;
	this->array[3] = &Intern::makePresidentialPardonForm;
}

Intern::Intern(const Intern &a) {
	for (int i = 0; i < 4; i++)
		this->array[i] = a.array[i];
}

Intern::~Intern() {
}

Intern & Intern::operator=(Intern const &a) {
	for (int i = 0; i < 4; i++)
		this->array[i] = a.array[i];
	return (*this);
}

Form *Intern::makeShrubberyCreationForm(std::string target) {
	std::cout << "Intern creates makeShrubberyCreationForm" << std::endl;
	return new ShrubberyCreationForm(target);
}

Form *Intern::makeRobotomyRequestForm(std::string target) {
	std::cout << "Intern creates RobotomyRequestForm" << std::endl;
	return new RobotomyRequestForm(target);
}

Form *Intern::makePresidentialPardonForm(std::string target) {
	std::cout << "Intern creates PresidentialPardonForm" << std::endl;
	return new PresidentialPardonForm(target);
}

Form *Intern::makeNull(std::string target) {
	std::cout << "Intern knows nothing about this form\n";
	(void)target;
	return NULL;
}

Form *Intern::makeForm(std::string type, std::string target) {
	int i = (type == "shrubbery creation") + (type == "robotomy request") * 2 + (type == "presidential pardon") * 3;
	return (this->*array[i])(target);
}