#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"),
	ScavTrap(name),
	FragTrap(name) {

	this->name = name;
	this->hit_points = FragTrap::hit_points;
	this->energy_points = 100;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "DiamondTrap <" << this->name << "> was born\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap <" << name << "> destroyed\n";
}

void DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	std::cout << "Hello, i am DiamondTrap, my name is " << this->name
		<< " and my ClapTrap's name is " << ClapTrap::name << std::endl;
}
