#include "easyfind.hpp"

void find(std::list<int> lst, int ch)
{
	std::cout << "trying to find " << ch << std::endl;
	std::list<int>::const_iterator it;
	it = easyfind(lst, ch);
	if (it != lst.end())
		std::cout << *it << " was found"  << std::endl;
	else
		std::cout << "nothing was found\n";
}

int main() {
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(2);
	lst.push_back(1);
	std::cout << "lst: ";
	for (std::list<int>::iterator i = lst.begin(); i != lst.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	find(lst, 2);
	find(lst, 5);
	find(lst, 21);
}

