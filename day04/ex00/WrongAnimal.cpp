#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "wrong animal";
	std::cout << "WrongAnimal was born\n";
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal died\n";
}

std::string WrongAnimal::getType() const {
	return (this->type);
}

void WrongAnimal::makeSound() const {
	std::cout << "Salam, wrong animals\n";
}
