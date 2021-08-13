#ifndef CPP_MODULE_POINT_HPP
#define CPP_MODULE_POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point();
	~Point();
	Point(Point const &a);
	Point(float x, float y);
	Point &operator=(Point const &a);
	float get_x() const;
	float get_y() const;
private:
	Fixed const x;
	Fixed const y;
};

#endif
