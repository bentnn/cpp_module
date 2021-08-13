#include "ClapTrap.hpp"

int main() {
	ClapTrap a("Joe");
	ClapTrap b("Vladimir");

	for (int i = 0; i < 10; i++)
	{
		b.attack(a.get_name());
		a.takeDamage(b.get_damage());
	}
	b.attack(a.get_name());

	a.beRepaired(5);
	a.beRepaired(10);
	a.takeDamage(2000);
}