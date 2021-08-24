#include "Cat.hpp"

Cat::Cat() : Animal(){
	this->type = "cat";
	this->brain = new Brain();
	std::cout << "Cat was born\n";
}

Cat::Cat(const Cat &a): Animal() {
	this->type = a.type;
	this->brain = new Brain();
	std::string temp = a.brain->get_ideas()[0];
	this->brain->set_ideas(temp);
	std::cout << "Cat was copied\n";
}

Cat & Cat::operator=(const Cat &a) {
	this->type = a.type;
	std::string temp = a.brain->get_ideas()[0];
	this->brain->set_ideas(temp);
	std::cout << "Cat was copied with '='\n";
	return (*this);
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