#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->name = name;
}

Zombie::~Zombie() {
	std::cout << "<" <<this->name << ">" << " dead\n";
}

Zombie::Zombie() {

}

void Zombie::announce() const {
	std::cout << "<" <<this->name << ">" << " BraiiiiiiinnnzzzZ...\n";
}

void Zombie::set_name(std::string const &str) {
	this->name = str;
}


