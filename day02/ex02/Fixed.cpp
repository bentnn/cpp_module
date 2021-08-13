#include "Fixed.hpp"

Fixed::Fixed(): n(0) {
}

Fixed::Fixed(int ch) {
	this->n = ch << bits;
}

Fixed::Fixed(float ch) {
	this->n = roundf(ch * (1 << bits));
}

Fixed::~Fixed() {
}

Fixed::Fixed(const Fixed &a) {
	*this = a;
}

int Fixed::toInt() const {
	return (this->n >> bits);
}

float Fixed::toFloat() const {
	return ((float)this->n / (1 << bits));
}

int Fixed::getRawBits() const {
	return (this->n);
}

Fixed &Fixed::operator=(const Fixed &a) {
	this->n = a.n;
	return (*this);
}

void Fixed::setRawBits(const int raw) {
	this->n = raw;
}

std::ostream &operator<<(std::ostream &o, Fixed const &a) {
	o << a.toFloat();
	return (o);
}

bool Fixed::operator<(const Fixed &a) const {
	return (this->getRawBits() < a.getRawBits());
}

bool Fixed::operator>(const Fixed &a) const {
	return (this->getRawBits() > a.getRawBits());
}

bool Fixed::operator<=(const Fixed &a) const {
	return (this->getRawBits() <= a.getRawBits());
}

bool Fixed::operator>=(const Fixed &a) const {
	return (this->getRawBits() >= a.getRawBits());
}

bool Fixed::operator==(const Fixed &a) const {
	return (this->getRawBits() == a.getRawBits());
}

bool Fixed::operator!=(const Fixed &a) const {
	return (this->getRawBits() != a.getRawBits());
}

Fixed &Fixed::operator++() {
	this->n++;
	return (*this);
}

Fixed &Fixed::operator--() {
	this->n--;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed copy(*this);
	this->n++;
	return (copy);
}

Fixed Fixed::operator--(int) {
	Fixed copy(*this);
	this->n--;
	return (copy);
}


Fixed Fixed::operator+(const Fixed &a) const {
	return (Fixed(this->n + a.n));
}

Fixed Fixed::operator-(const Fixed &a) const {
	return (Fixed(this->n - a.n));
}

Fixed Fixed::operator*(const Fixed &a) const {
	Fixed temp;
	temp.setRawBits((this->n * a.n) / (1 << bits));
	return (temp);
}

Fixed Fixed::operator/(const Fixed &a) const {
	Fixed temp;
	if (a.n == 0)
	{
		std::cout << "aaaaaaa< zero!!!!\n";
		temp.setRawBits(this->n);
	}
	else
		temp.setRawBits((this->n << bits) / a.n);
	return (temp);
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b) {
	return (a.n > b.n ? b : a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b) {
	return (a.n > b.n ? a : b);
}