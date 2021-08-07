#include "Weapon.hpp"

Weapon::Weapon(const std::string &type): type(type) {

}

Weapon::~Weapon(void) {

}

std::string const& Weapon::getType() {
	return (this->type);
}

void Weapon::setType(const std::string &newType) {
	this->type = newType;
}