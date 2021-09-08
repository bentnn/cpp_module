#include "MutantStack.hpp"

void dec(int &i)
{
	i--;
}

int main() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	std::cout << "Before inc. size = " << mstack.size() << std::endl;
	for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++) {
		std::cout << *i << " ";
		*i += 1;
	}
	std::cout << std::endl;
	std::cout << "After inc. size = " << mstack.size() << std::endl;
	for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	std::for_each(mstack.begin(), mstack.end(), dec);
	std::cout << "After dec. size = " << mstack.size() << std::endl;
	for (MutantStack<int>::iterator i = mstack.begin(); i < mstack.end(); i++)
	{
		std::cout << *i << " ";
	}
	std::cout << std::endl;
	return 0;
}