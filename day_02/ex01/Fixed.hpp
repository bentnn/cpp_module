#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed(void);
	Fixed(int ch);
	Fixed(float ch);
	Fixed(Fixed const &a);
	~Fixed(void);
	Fixed &operator=(Fixed const &a);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
	float toFloat( void ) const;
	int toInt( void ) const;
private:
	int n;
	static const int bits = 8;
};
std::ostream &operator<<(std::ostream &o, Fixed const &a);

#endif
