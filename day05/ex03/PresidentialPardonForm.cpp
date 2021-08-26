#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5) {
	this->set_target(target);
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	this->catWeExec(executor);
	std::cout << this->get_target() << " has been pardoned by Zafod Beeblebrox\n";
}