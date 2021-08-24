#ifndef CPP_MODULE_BRAIN_HPP
#define CPP_MODULE_BRAIN_HPP

#include <iostream>

class Brain {
public:
	Brain();
	~Brain();
	Brain(Brain const &a);
	void set_ideas(std::string idea);
	std::string *get_ideas();
private:
	std::string ideas[100];

};


#endif
