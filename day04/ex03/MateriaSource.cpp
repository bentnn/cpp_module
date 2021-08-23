#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		this->memory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &a) {
	int i = 0;
	while (i < 4 && a.memory[i] != NULL)
	{
		this->memory[i] = a.memory[i]->clone();
		i++;
	}
	for (int j = i; j < 4; j++)
		this->memory[j] = NULL;
}

MateriaSource::~MateriaSource() {
	int i = 0;
	while (i < 4 && this->memory[i] != NULL)
	{
		delete this->memory[i];
		i++;
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource &a) {
	int i = 0;

	while (i < 4 && this->memory[i] != NULL)
	{
		delete this->memory[i];
		i++;
	}
	i = 0;
	while (i < 4 && a.memory[i] != NULL)
	{
		this->memory[i] = a.memory[i]->clone();
		i++;
	}
	for (int j = i; j < 4; j++)
		this->memory[j] = NULL;
	return (*this);
}

AMateria * MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++)
	{
		if (this->memory[i]->getType() == type)
			return this->memory[i]->clone();
	}
	return (NULL);
}

void MateriaSource::learnMateria(AMateria *m) {
	int i = 0;

	while (i < 4 && this->memory[i] != NULL)
		i++;
	if (i != 4)
		this->memory[i] = m;
}