#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45) {
	this->set_target(target);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	this->catWeExec(executor);
	std::cout << "BRRRRRRRRRRRRZZZZ..... ";
	std::srand(std::time(nullptr));
	if (std::rand() % 2 == 0)
		std::cout << "Yeah, we did it. " << this->get_target() << " has been robotomized successfully\n";
	else
		std::cout << "Oh no, some shit happened.\n";
}