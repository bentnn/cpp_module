#ifndef CPP_MODULE_WRONGCAT_HPP
#define CPP_MODULE_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	void makeSound() const;
};


#endif
