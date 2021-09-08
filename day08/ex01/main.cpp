#include "Span.hpp"

int main() {
	Span sp = Span(5000);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp << std::endl;
	std::vector<int> a(4995, 333);
	a[2222] = -2;
	try {
		sp.addNumbers(a.begin(), a.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		//sp.addNumber(2);
	}
	catch (std::exception) {
		std::cout << "sorry\n";
	}
}
