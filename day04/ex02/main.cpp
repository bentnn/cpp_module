#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << std::endl;

	Animal *array[10];
	for (int i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
			array[i] = new Cat();
		else
			array[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
		delete array[i];
	std::cout << std::endl;
	Cat *a = new Cat();
	Cat *b = new Cat(*a);
	std::cout << std::endl;
	a->set_ideas("eeeuiiueieideofeie");

	*b = *a;
	std::cout << a->get_ideas()[0] << std::endl;
	std::cout << std::endl;
	delete a;
	delete b;
}