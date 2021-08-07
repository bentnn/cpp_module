#include "HumanA.hpp"

void HumanA::attack() const {
	std::cout << this->name << " attacks with his " << this->weapon->getType()
	<< std::endl;
}

HumanA::HumanA(std::string const &name, Weapon &weapon): name(name), weapon(&weapon) {
}

HumanA::~HumanA() {
}