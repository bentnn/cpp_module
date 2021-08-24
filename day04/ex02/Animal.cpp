#include "Animal.hpp"

Animal::Animal() {
	this->type = "animal";
	std::cout << "Animal was born\n";
}

Animal::Animal(const Animal &a): type(a.type) {
	std::cout << "Animal was copied\n";
}

Animal & Animal::operator=(const Animal &a) {
	this->type = a.type;
	std::cout << "Animal was copied with '='\n";
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal died\n";
}

std::string Animal::getType() const {
	return (this->type);
}