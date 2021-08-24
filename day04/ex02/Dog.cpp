#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "dog";
	this->brain = new Brain();
	std::cout << "Dog was born\n";
}

void Dog::makeSound() const {
	std::cout << "Woof\n";
}

Dog::Dog(const Dog &a): Animal() {
	this->type = a.type;
	this->brain = new Brain();
	std::string temp = a.brain->get_ideas()[0];
	this->brain->set_ideas(temp);
	std::cout << "Dog was copied\n";
}

Dog & Dog::operator=(const Dog &a) {
	this->type = a.type;
	std::string temp = a.brain->get_ideas()[0];
	this->brain->set_ideas(temp);
	std::cout << "Dog was copied with '='\n";
	return (*this);
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