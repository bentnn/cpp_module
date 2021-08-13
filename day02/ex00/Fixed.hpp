#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>

class Fixed {
public:
	Fixed(void);
	Fixed(Fixed const &a);
	~Fixed(void);
	Fixed &operator=(Fixed const &a);
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int n;
	static const int bits = 8;
};

#endif
