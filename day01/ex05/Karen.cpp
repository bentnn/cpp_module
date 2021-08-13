#include "Karen.hpp"

Karen::Karen() {
	this->array[0] = &Karen::debug;
	this->array[1] = &Karen::info;
	this->array[2] = &Karen::warning;
	this->array[3] = &Karen::error;
	this->array[4] = &Karen::i_dont_know;
}

void Karen::debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-"
				 "triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info() {
	std::cout << "I cannot believe adding extra bacon cost more money. "
				 "You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning() {
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error() {
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

void Karen::i_dont_know() {
	std::cout << "Probably complaining about insignificant problems\n";
}

void Karen::complain(std::string level) {
	int i = 0;
	i += (level == "DEBUG" ? 1 : 0) + (level == "INFO" ? 2 : 0)
			+ (level == "WARNING" ? 3 : 0) + (level == "ERROR" ? 4 : 0);
	i = (i == 0 ? 5 : i);
	(this->*array[i - 1])();
}