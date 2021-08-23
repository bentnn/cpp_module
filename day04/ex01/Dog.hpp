#ifndef CPP_MODULE_DOG_HPP
#define CPP_MODULE_DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public  Animal{
public:
	Dog();
	virtual void makeSound() const;
	~Dog();
	void set_ideas(std::string idea);
	std::string *get_ideas();
private:
	Brain *brain;
};


#endif
