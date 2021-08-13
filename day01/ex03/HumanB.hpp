#ifndef CPP_MODULE_HUMANB_HPP
#define CPP_MODULE_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
public:
	HumanB(std::string const &name);
	~HumanB();
	void setWeapon(Weapon &weapon);
	void attack(void) const;
private:
	std::string name;
	Weapon *weapon;
};


#endif
