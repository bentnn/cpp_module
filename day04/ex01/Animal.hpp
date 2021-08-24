#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal {
public:
	Animal();
	Animal(Animal const &a);
	Animal &operator=(Animal const &a);
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};


#endif
