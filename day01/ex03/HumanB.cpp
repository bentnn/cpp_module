#include "HumanB.hpp"

HumanB::HumanB(const std::string &name): name(name) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon &weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	std::cout << this->name << " attacks with his " << this->weapon->getType()
		<< std::endl;
}
