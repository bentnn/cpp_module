#ifndef CPP_MODULE_ICE_HPP
#define CPP_MODULE_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(Ice const &a);
	Ice &operator=(Ice const &a);
	AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif
