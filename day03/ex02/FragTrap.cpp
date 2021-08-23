#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	this->attack_damage = 30;
	this->hit_points = 100;
	this->energy_points = 100;
	std::cout << "FragTrap <" << this->name << "> was born\n";
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap <" << name << "> destroyed\n";
}

void FragTrap::attack(const std::string &target) {
	if (this->hit_points == 0)
	{
		std::cout << "FragTrap <" << name << "> can't attack <"
		<< target << ">, because he died\n";
		return;
	}
	if (this->energy_points > 0)
	{
		std::cout << "FragTrap <" << name << "> does " << this->attack_damage <<
		" damage to <" << target << ">. it is scary\n";
		this->energy_points--;
	}
	else
		std::cout << "FragTrap <" << name
		<< "> has 0 energy points and can not attack <" << target << "> \n";
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap <" << name << "> wanna high fives\n";
}