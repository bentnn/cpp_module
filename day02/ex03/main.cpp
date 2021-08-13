#include "Point.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main( void ) {
	Point a(4.6, -1.02);
	Point b(6.3, 4.38);
	Point c(12.14, 2.58);

	Point d(7.78, 2.38);
	Point e(10.85, 1.96);
	Point f(4.72, 0.24);

	std::cout << "Is D inside a triangle? ";
	if (bsp(a, b, c, d))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	std::cout << "Is E inside a triangle? ";
	if (bsp(a, b, c, e))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	std::cout << "Is F inside a triangle? ";
	if (bsp(a, b, c, f))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	std::cout << "Is A inside a triangle? ";
	if (bsp(a, b, c, a))
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	return 0;
}