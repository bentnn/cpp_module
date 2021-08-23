#ifndef CPP_MODULE_MATERIASOURCE_HPP
#define CPP_MODULE_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
public:
	MateriaSource();
	MateriaSource(MateriaSource const &a);
	MateriaSource &operator=(MateriaSource const &a);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria *m);
	virtual AMateria* createMateria(std::string const & type);
private:
	AMateria *memory[4];
};


#endif
