#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie *temp = newZombie(name);
	temp->announce();
	delete temp;
}