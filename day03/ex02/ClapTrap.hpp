#ifndef CPP_MODULE_CLAPTRAP_HPP
#define CPP_MODULE_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
	ClapTrap(std::string name);
	~ClapTrap();
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string const &get_name();
	int get_damage();

protected:
	std::string name;
	int hit_points;
	int energy_points;
	int attack_damage;
};


#endif
