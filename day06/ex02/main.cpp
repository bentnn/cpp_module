#include <iostream>

class Base {
public:
	virtual ~Base(){};
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void) {
	std::srand(std::time(nullptr));
	int a = std::rand();
	if (a % 3 == 0) {
		std::cout << "it will be A\n";
		return new A();
	}
	if (a % 3 == 1) {
		std::cout << "it will be B\n";
		return new B();
	}
	else {
		std::cout << "it will be C\n";
		return new C();
	}
}

void identify(Base* p) {
	A *tempa = dynamic_cast<A*>(p);
	if (tempa)
		std::cout << "A\n";
	else
	{
		B *tempb = dynamic_cast<B*>(p);
		if (tempb)
			std::cout << "B\n";
		else
		{
			C *tempc = dynamic_cast<C*>(p);
			if (tempc)
				std::cout << "C\n";
			else
				std::cout << "I don't know this type\n";
		}
	}
}

void identify(Base& p) {
	try {
		A &tempa = dynamic_cast<A&>(p);
		(void)tempa;
		std::cout << "A\n";
	}
	catch (std::bad_cast) {
		try {
			B &tempb = dynamic_cast<B&>(p);
			(void)tempb;
			std::cout << "B\n";
		}
		catch (std::bad_cast) {
			try {
				C &tempc = dynamic_cast<C&>(p);
				(void)tempc;
				std::cout << "C\n";
			}
			catch (std::bad_cast) {
				std::cout << "I don't know this type\n";
			}
		}
	}
}

int main()
{
	Base *a = generate();
	identify(a);
	identify(*a);
	delete a;
	return 0;
}