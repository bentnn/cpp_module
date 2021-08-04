#include "PhoneBook.h"

PhoneBook::PhoneBook(): cur(0){}
PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	Contact temp;
	std::string str;

	std::cout << "First name: ";
	std::cin >> str;
	temp.set_first_name(&str);
	std::cout << "Last name: ";
	std::cin >> str;
	temp.set_last_name(&str);
	std::cout << "Nickname: ";
	std::cin >> str;
	temp.set_nickname(&str);
	std::cout << "Phone number: ";
	std::cin >> str;
	temp.set_phone_number(&str);
	std::cout << "Darkest secret: ";
	std::cin >> str;
	temp.set_darkest_secret(&str);
	this->array[this->cur] = temp;
	this->cur++;
	if (this->cur == 8)
	{
		this->cur = 0;
		std::cout << "Next contact will start rewriting phone book" << std::endl;
	}
}