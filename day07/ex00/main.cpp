#include "whatever.hpp"
#include <iostream>

class Awesome
{
public:
	Awesome( int n ) : _n( n ) { return; }
	bool operator>=(Awesome const &src) const {return this->_n >= src._n;}
	bool operator<=(Awesome const &src) const {return this->_n <= src._n;}
	int get_n() const {return this->_n;}
private:
	int _n;
};


int main () {
	int a = 2;
	int b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;
	b = 3;
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	float af = 2.5f;
	float bf = -12.2f;
	std::cout << "af = " << af << ", bf = " << bf << std::endl;
	std::cout << "min( af, bf ) = " << ::min( af, bf ) << std::endl;
	std::cout << "max( af, bf ) = " << ::max( af, bf ) << std::endl;
	std::cout << std::endl;
	Awesome aa(42);
	Awesome ab(21);
	std::cout << "aa = " << aa.get_n() << ", ab = " << ab.get_n() << std::endl;
	::swap(aa, ab);
	std::cout << "aa = " << aa.get_n() << ", ab = " << ab.get_n() << std::endl;
	std::cout << "min( aa, ab ) = " << ::min<Awesome>( aa, ab ).get_n() << std::endl;
	std::cout << "max( aa, ab ) = " << ::max<Awesome>( aa, ab ).get_n() << std::endl;
	return 0;
}