#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class ShrubberyCreationForm;

int main() {
	try {
		Bureaucrat boss = Bureaucrat("Big bro", 1);
		Bureaucrat little = Bureaucrat("little bro", 100);

		PresidentialPardonForm first = PresidentialPardonForm("Navalny");
		boss.signForm(first);
		boss.executeForm(first);

		RobotomyRequestForm second = RobotomyRequestForm("Putin");
		boss.signForm(second);
		boss.executeForm(second);

		ShrubberyCreationForm third = ShrubberyCreationForm("bip");
		little.signForm(third);
		little.executeForm(third);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
