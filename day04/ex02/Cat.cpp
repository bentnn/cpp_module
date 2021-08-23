#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = "cat";
	this->brain = new Brain();
	std::cout << "Cat was born\n";
}

void Cat::makeSound() const {
	std::cout << "Meow\n";
}

Cat::~Cat() {
	delete this->brain;
	std::cout << "Cat died\n";
}

std::string * Cat::get_ideas() {
	return (this->brain->get_ideas());
}

void Cat::set_ideas(std::string idea) {
	this->brain->set_ideas(idea);
}