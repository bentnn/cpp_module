#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	this->attack_damage = 20;
	this->hit_points = 100;
	this->energy_points = 50;
	std::cout << "ScavTrap <" << this->name << "> was born\n";
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap <" << name << "> destroyed\n";
}

void ScavTrap::attack(const std::string &target) {
	if (this->hit_points == 0)
	{
		std::cout << "ScavTrap <" << name << "> can't attack <"
		<< target << ">, because he is died, don't touch him\n";
		return;
	}
	if (this->energy_points > 0)
	{
		std::cout << "ScavTrap <" << name << "> does " << this->attack_damage <<
			" f*cking damage to <" << target << ">!!! AAAAAAA!!!\n";
		this->energy_points--;
	}
	else
		std::cout << "ScavTrap <" << name << "> is tired and will not attack <"
		<< target << "> \n";
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap <" << this->name
		<< "> have enterred in Gate keeper mode, mofo\n";
}