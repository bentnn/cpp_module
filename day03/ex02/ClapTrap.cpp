#include "ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): name(name), hit_points(10),
										energy_points(10), attack_damage(0) {
	std::cout << "ClapTrap <" << name << "> was born\n";
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap <" << name << "> destroyed\n";
}

void ClapTrap::attack(std::string const &target) {
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap <" << name << "> cannot attack <"
		<< target << ">, he is died, don't you see?\n";
		return;
	}
	if (this->energy_points > 0)
	{
		std::cout << "ClapTrap <" << name << "> attacks <"
			<< target << ">, doing " << this->attack_damage << " points of damage!!!\n";
		this->energy_points--;
	}
	else
		std::cout << "ClapTrap <" << name << "> has no energy to attack <"
			<< target << ">\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hit_points += (int)amount;
	std::cout << "ClapTrap <" << name << "> takes "
		<< amount << "hp and now has " << this->hit_points << "!!!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->hit_points -= (int)amount;
	this->hit_points = this->hit_points < 0 ? 0 : this->hit_points;
	if (this->hit_points > 0)
	{
		std::cout << "ClapTrap <" << name
			<< "> takes " << amount << " damage... But he is still alive!!\n";
	}
	else
		std::cout << "ClapTrap <" << name
			<< "> takes " << amount << " damage and die... oh, it is sad\n";
}

int ClapTrap::get_damage() {
	return (this->attack_damage);
}

const std::string &ClapTrap::get_name() {
	return (name);
}

