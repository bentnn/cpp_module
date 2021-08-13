#include "Fixed.hpp"

Fixed::Fixed(): n(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(int ch) {
	std::cout << "Int constructor called\n";
	this->n = ch << bits;
}

Fixed::Fixed(float ch) {
	std::cout << "Float constructor called\n";
	this->n = roundf(ch * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called\n";
	*this = a;
}

int Fixed::toInt() const {
	return (this->n >> bits);
}

float Fixed::toFloat() const {
	return ((float)this->n / (1 << bits));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->n);
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called\n";
	this->n = a.n;
	return (*this);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	this->n = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &a) {
	o << a.toFloat();
	return (o);
}