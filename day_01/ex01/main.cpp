#include "Zombie.hpp"

int main() {
	Zombie *array = zombieHorde(10, "Aboba");
	for (int i = 0; i < 10; i++)
		array[i].announce();
	delete [] array;
}