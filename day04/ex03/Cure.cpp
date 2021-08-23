#include "Cure.hpp"

Cure::Cure(): AMateria("cure") {
}

Cure::Cure(const Cure &a): AMateria(a.getType()) {
}

Cure & Cure::operator=(const Cure &a) {
	this->type = a.type;
	return (*this);
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria * Cure::clone() const {
	return new Cure(*this);
}