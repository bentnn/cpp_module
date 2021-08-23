#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "wrong cat";
}

void WrongCat::makeSound() const {
	std::cout << "Meow\n";
}
