#include "Karen.hpp"

int main() {
	std::string str;
	Karen aaaaa;

	while (std::getline(std::cin, str))
	{
		aaaaa.complain(str);
	}
}
