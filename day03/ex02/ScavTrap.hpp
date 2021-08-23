#ifndef CPP_MODULE_SCAVTRAP_HPP
#define CPP_MODULE_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap{
public:
	ScavTrap(std::string name);
	~ScavTrap();
	void attack(std::string const & target);
	void guardGate();
};


#endif
