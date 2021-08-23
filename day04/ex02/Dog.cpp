#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "dog";
	this->brain = new Brain();
	std::cout << "Dog was born\n";
}

void Dog::makeSound() const {
	std::cout << "Woof\n";
}

Dog::~Dog() {
	delete this->brain;
	std::cout << "Dog died\n";
}

std::string * Dog::get_ideas() {
	return (this->brain->get_ideas());
}

void Dog::set_ideas(std::string idea) {
	this->brain->set_ideas(idea);
}