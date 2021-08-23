#include "AMateria.hpp"

AMateria::AMateria(const std::string &type): type(type) {
}


AMateria::AMateria(const AMateria &a): type(a.getType()) {
}

const std::string & AMateria::getType() const {
	return (this->type);
}

AMateria & AMateria::operator=(const AMateria &a) {
	this->type = a.getType();
	return (*this);
}

void AMateria::use(ICharacter &target) {
	(void)target;
}