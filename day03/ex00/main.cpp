#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Joe");
	ClapTrap b("Vladimir");

	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		b.attack(a.get_name());
		a.takeDamage(b.get_damage());
	}
	std::cout << std::endl;
	b.attack(a.get_name());
	std::cout << std::endl;

	a.beRepaired(5);
	a.beRepaired(10);
	std::cout << std::endl;
	a.takeDamage(2000);
	std::cout << std::endl;
}