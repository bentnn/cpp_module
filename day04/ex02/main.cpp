#include "Cat.hpp"
#include "Dog.hpp"

int main() {
	const Animal* j = new Cat();
	const Animal* i = new Dog();
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
	Dog *b = new Dog();
	std::cout << std::endl;
	a->set_ideas("eeeuiiueieideofeie");

	std::cout << a->get_ideas()[0] << std::endl;
	std::cout << std::endl;
	delete a;
	delete b;

//	const Animal* meta = new Animal();
//	const Animal* j = new Dog();
//	const Animal* i = new Cat();
//
//	std::cout << j->getType() << " " << std::endl;
//	std::cout << i->getType() << " " << std::endl;
//	i->makeSound(); //will output the cat sound!
//	j->makeSound();
//	meta->makeSound();
//
//	delete meta;
//	delete j;
//	delete i;
//
//	const WrongAnimal *w = new WrongCat();
//	const WrongAnimal *q = new WrongAnimal();
//	std::cout << w->getType() << " " << std::endl;
//	std::cout << q->getType() << " " << std::endl;
//	w->makeSound();
//	q->makeSound();
//
//	delete w;
//	delete q;
//	return(0);
}