#include "PhoneBook.hpp"

int main() {
	std::string str;
	PhoneBook book;

	while (true)
	{
		std::cout << "> ";
		std::cin >> str;
		if (str == "EXIT")
			break;
		else if (str == "ADD")
			book.add();
		else if (str == "SEARCH")
			book.search();
	}
}

