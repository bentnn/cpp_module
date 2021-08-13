#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): cur(0), size(0){}
PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	Contact temp;
	std::string str;

	std::cout << "First name: ";
	if (!(std::cin >> str))
		return;
	temp.set_first_name(&str);
	std::cout << "Last name: ";
	if (!(std::cin >> str))
		return;
	temp.set_last_name(&str);
	std::cout << "Nickname: ";
	if (!(std::cin >> str))
		return;
	temp.set_nickname(&str);
	std::cout << "Phone number: ";
	if (!(std::cin >> str))
		return;
	temp.set_phone_number(&str);
	std::cout << "Darkest secret: ";
	if (!(std::cin >> str))
		return;
	temp.set_darkest_secret(&str);
	this->array[this->cur] = temp;
	this->cur++;
	this->size += (this->size != 8);
	if (this->cur == 8)
	{
		this->cur = 0;
		std::cout << "Next contact will start rewriting phone book" << std::endl;
	}
}

std::string PhoneBook::print_in_ten_symb(std::string str) const
{
	std::string res;
	if (str.length() == 10)
		return (str);
	if (str.length() > 10)
	{
		res = str.substr(0, 10);
		res[9] = '.';
	}
	else
	{
		for (int i = 0; i < 10 - (int)str.length(); i++)
			res += ' ';
		res += str;
	}
	return (res);
}

void PhoneBook::search() const{
	int index;
	std::string str;

	std::cout << "|     Index|First name| Last name|  Nickname|\n";
	for (int i = 0; i < this->size; i++)
	{
		std::cout << "|-------------------------------------------|\n";
		std::cout << "|         " << std::to_string(i + 1) << "|" <<
			this->print_in_ten_symb(array[i].get_first_name()) << "|" <<
			this->print_in_ten_symb(array[i].get_last_name()) << "|" <<
			this->print_in_ten_symb(array[i].get_nickname()) << "|\n";
	}
	std::cout << "Enter the index of a contact to display full information: ";
//	while (str.length() == 0)
//		std::cin >> str;
	std::cin >> str;
	if (str[0] == '\0')
		return;
	if (str.length() > 1 || !std::isdigit(str[0]))
	{
		std::cout << "Index is wrong\n";
		return;
	}
	index = std::stoi(str);
	if (index > this->size || index <= 0)
	{
		std::cout << "Index cannot be found\n";
		return;
	}
	this->array[index - 1].print_about_me();
}