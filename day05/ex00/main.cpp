#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat a = Bureaucrat("Vova", 151);
		a.decrement_grade();
		std::cout << a << std::endl;
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
