#ifndef CPP_MODULE_AMATERIA_HPP
#define CPP_MODULE_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
protected:
	std::string type;
public:
	AMateria(std::string const & type);
	virtual ~AMateria() {}
	AMateria(AMateria const &a);
	AMateria &operator=(AMateria const &a);
	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif
