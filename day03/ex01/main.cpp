#include "ScavTrap.hpp"

int main() {
	ClapTrap a("Joe");
	ScavTrap b("Donald");

	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		a.attack(b.get_name());
		b.takeDamage(a.get_damage());
	}
	std::cout << std::endl;
	b.beRepaired(100);
	b.guardGate();
	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		b.attack(a.get_name());
		a.takeDamage(b.get_damage());
	}
	std::cout << std::endl;
	a.beRepaired(20);
	std::cout << std::endl;
}