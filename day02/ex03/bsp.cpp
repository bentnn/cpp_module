#include "Point.hpp"

float vec_mult(Point const a, Point const b, Point const point) {
	return ((a.get_x() - point.get_x()) * (b.get_y() - a.get_y())
		- (b.get_x() - a.get_x()) * (a.get_y() - point.get_y()));
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	float first = vec_mult(a, b, point);
	float second = vec_mult(b, c, point);
	float third = vec_mult(c, a, point);
	return ((first > 0 && second > 0 && third > 0) ||
		(first < 0 && second < 0 && third < 0));
}