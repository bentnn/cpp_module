#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "<" <<this->name << ">" << " dead\n";
}

void Zombie::announce() const {
	std::cout << "<" <<this->name << ">" << " BraiiiiiiinnnzzzZ...\n";
}
