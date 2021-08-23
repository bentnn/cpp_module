#ifndef CPP_MODULE_WRONGANIMAL_HPP
#define CPP_MODULE_WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	void makeSound() const;
	std::string getType() const;
protected:
	std::string type;
};


#endif
