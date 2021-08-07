#include "Zombie.hpp"

void randomChump( std::string name ) {
	Zombie *temp = new Zombie(name);
	temp->announce();
	delete temp;
}