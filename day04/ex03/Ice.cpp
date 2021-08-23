#include "Ice.hpp"

Ice::Ice(): AMateria("ice") {
}

Ice::Ice(const Ice &a): AMateria(a.getType()) {
}

Ice & Ice::operator=(const Ice &a) {
	this->type = a.type;
	return (*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

AMateria * Ice::clone() const {
	return new Ice(*this);
}