#include "Fixed.hpp"

Fixed::Fixed(): n(0) {
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called\n";
	this->n = a.getRawBits();
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called\n";
	return (this->n);
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Assignation operator called\n";
	this->n = a.getRawBits();
	return (*this);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called\n";
	this->n = raw;
}