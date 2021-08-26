#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main() {
	try {
		Intern  someRandomIntern;
		Form*   rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf)
		{
			 Bureaucrat boss("big brother", 1);
			 boss.signForm(*rrf);
			 boss.executeForm(*rrf);
			 delete rrf;
		}
	}

	catch (const std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
