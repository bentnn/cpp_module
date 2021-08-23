#include "DiamondTrap.hpp"

int main() {
	ClapTrap a("Joe");
	ScavTrap b("Donald");
	FragTrap c("Emmanuel");
	DiamondTrap d("Aleksey");

	std::cout << std::endl;

	d.whoAmI();
	d.highFivesGuys();
	d.guardGate();
	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		d.attack(c.get_name());
		c.takeDamage(d.get_damage());
	}

	std::cout << std::endl;

	for (int i = 0; i < 3; i++)
	{
		b.attack(d.get_name());
		d.takeDamage(b.get_damage());
	}

	std::cout << std::endl;
	d.beRepaired(40);
	std::cout << std::endl;
//	std::cout << std::endl;
//	for (int i = 0; i < 3; i++)
//	{
//		a.attack(c.get_name());
//		c.takeDamage(a.get_damage());
//	}
//	std::cout << std::endl;
//	c.beRepaired(100);
//	c.highFivesGuys();
//	std::cout << std::endl;
//	for (int i = 0; i < 3; i++)
//	{
//		c.attack(b.get_name());
//		b.takeDamage(c.get_damage());
//	}
//	std::cout << std::endl;
//	b.beRepaired(20);
//	std::cout << std::endl;
}