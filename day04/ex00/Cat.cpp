#include "Cat.hpp"

Cat::Cat() {
	this->type = "cat";
}

void Cat::makeSound() const {
	std::cout << "Meow\n";
}