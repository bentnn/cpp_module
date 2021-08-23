#ifndef CPP_MODULE_CURE_HPP
#define CPP_MODULE_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(Cure const &a);
	Cure &operator=(Cure const &a);
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif
