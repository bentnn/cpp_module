#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain was created\n";
}

Brain::~Brain() {
	std::cout << "Brain was destroyed\n";
}

void Brain::set_ideas(std::string idea) {
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
	std::cout << "Idea was set\n";
}

std::string * Brain::get_ideas() {
	return (this->ideas);
}