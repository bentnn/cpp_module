#ifndef CPP_MODULE_HUMANA_HPP
#define CPP_MODULE_HUMANA_HPP


#include "Weapon.hpp"

class HumanA {
public:
	HumanA(std::string const &name, Weapon &weapon);
	~HumanA(void);
	void attack(void) const;
private:
	std::string name;
	Weapon *weapon;
};


#endif
