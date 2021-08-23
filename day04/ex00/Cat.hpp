#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{
public:
	Cat();
	virtual void makeSound() const;
};


#endif
