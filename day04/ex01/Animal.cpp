#include "Animal.hpp"

Animal::Animal() {
	this->type = "animal";
	std::cout << "Animal was born\n";
}

Animal::~Animal() {
	std::cout << "Animal died\n";
}

std::string Animal::getType() const {
	return (this->type);
}

void Animal::makeSound() const {
	std::cout << "Salam, animals\n";
}