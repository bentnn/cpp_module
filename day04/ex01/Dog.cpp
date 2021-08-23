#include "Dog.hpp"

Dog::Dog() {
	this->type = "dog";
}

void Dog::makeSound() const {
	std::cout << "Woof\n";
}