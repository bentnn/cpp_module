#include "Character.hpp"

Character::Character(std::string name): name(name) {
	for (int i = 0; i <4; i++)
		this->invent[i] = NULL;
}

Character::~Character() {
}

Character::Character(const Character &a): name(a.getName()) {
	for (int i = 0; i <4; i++)
		this->invent[i] = a.invent[i];
}

Character & Character::operator=(const Character &a) {
	this->name = a.getName();
	for (int i = 0; i <4; i++)
		this->invent[i] = a.invent[i];
	return (*this);
}

const std::string & Character::getName() const {
	return this->name;
}

void Character::use(int idx, ICharacter &target) {
	if (idx >= 0 && idx <= 3 && this->invent[idx] != NULL)
		this->invent[idx]->use(target);
}

void Character::equip(AMateria *m) {
	int i = 0;

	while (i < 4 && this->invent[i] != NULL)
		i++;
	if (i != 4)
		this->invent[i] = m;
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx <= 3)
		this->invent[idx] = NULL;
}

