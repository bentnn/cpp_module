#ifndef CPP_MODULE_CAT_HPP
#define CPP_MODULE_CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
public:
	Cat();
	virtual void makeSound() const;
	Cat(Cat const &a);
	Cat &operator=(Cat const &a);
	~Cat();
	void set_ideas(std::string idea);
	std::string *get_ideas();
private:
	Brain *brain;
};


#endif
