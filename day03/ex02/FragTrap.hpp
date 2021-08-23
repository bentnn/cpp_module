#ifndef CPP_MODULE_FRAGTRAP_HPP
#define CPP_MODULE_FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {
public:
	FragTrap(std::string name);
	~FragTrap();
	void attack(std::string const & target);
	void highFivesGuys(void);
};


#endif
