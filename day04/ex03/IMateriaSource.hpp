#ifndef CPP_MODULE_IMATERIASOURCE_HPP
#define CPP_MODULE_IMATERIASOURCE_HPP

#include "Cure.hpp"
#include "Ice.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
