#include "Form.hpp"
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat a = Bureaucrat("Vova", 140);
		Form b = Form("Povestka", 140, 400);
		a.signForm(b);
	}
	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
