#ifndef CPP_MODULE_DIAMONDTRAP_HPP
#define CPP_MODULE_DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
public:
	DiamondTrap(std::string name);
	~DiamondTrap();
	void attack(std::string const & target);
	void whoAmI();

private:
	std::string name;
};


#endif
