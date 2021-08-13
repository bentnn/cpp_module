#include "Point.hpp"

Point::Point(): x(Fixed()), y(Fixed()) {
}

Point::~Point() {
}

Point::Point(const Point &a): x(a.x), y(a.y) {
}

Point::Point(float x, float y): x(Fixed(x)), y(Fixed(y)){
}

Point &Point::operator=(const Point &a) {
	Fixed *temp_x = const_cast<Fixed*>(&x);
	Fixed *temp_y = const_cast<Fixed*>(&y);
	*temp_x = a.x;
	*temp_y = a.y;
	return (*this);
}

float Point::get_x() const {
	return (this->x.toFloat());
}

float Point::get_y() const {
	return (this->y.toFloat());
}