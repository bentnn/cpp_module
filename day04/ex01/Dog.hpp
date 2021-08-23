#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"

class Dog : public  Animal{
public:
	Dog();
	virtual void makeSound() const;
};


#endif
