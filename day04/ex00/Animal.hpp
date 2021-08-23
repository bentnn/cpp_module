#ifndef CPP_MODULE_ANIMAL_HPP
#define CPP_MODULE_ANIMAL_HPP

#include <iostream>

class Animal {
public:
	Animal();
	virtual ~Animal();
	virtual void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};


#endif
