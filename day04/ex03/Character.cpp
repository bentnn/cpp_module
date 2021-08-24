#include "Character.hpp"

Character::Character(std::string name): name(name) {
	for (int i = 0; i <4; i++)
		this->invent[i] = NULL;
}

Character::~Character() {
	int i = 0;

	while (i < 4 && this->invent[i] != NULL)
	{
		delete this->invent[i];
		i++;
	}
}

Character::Character(const Character &a): name(a.getName()) {
	for (int i = 0; i < 4; i++)
	{
		if (a.invent[i] == NULL)
			this->invent[i] = NULL;
		else
			this->invent[i] = a.invent[i]->clone();
	}
}

Character & Character::operator=(const Character &a) {
	this->name = a.getName();

	for (int i = 0; i < 4; i++)
	{
		if (this->invent[i] != NULL)
			delete this->invent[i];

		if (a.invent[i] == NULL)
			this->invent[i] = NULL;
		else
			this->invent[i] = a.invent[i]->clone();
	}
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

