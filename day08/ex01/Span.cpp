#include "Span.hpp"

Span::Span(unsigned int n): n(n) {
}

Span::~Span() {
}

Span & Span::operator=(const Span &src) {
	this->n = src.n;
	this->array = src.array;
	return *this;
}

Span::Span(const Span &src) {
	*this = src;
}

void Span::addNumber(int ch) {
	if (this->array.size() == this->n)
		throw std::exception();
	this->array.push_back(ch);
}

int Span::shortestSpan() const {
	if (this->array.size() < 2)
		throw std::exception();
	int res = std::abs(this->array[0] - this->array[1]);
	for (unsigned int i = 2; i < this->array.size(); i++)
	{
		int sp = std::abs(this->array[i - 1] - this->array[i]);
		res = std::min(sp, res);
	}
	return res;
}

int Span::longestSpan() const {
	if (this->array.size() < 2)
		throw std::exception();
	int res = std::abs(this->array[0] - this->array[1]);
	for (unsigned int i = 2; i < this->array.size(); i++)
	{
		int sp = std::abs(this->array[i - 1] - this->array[i]);
		res = std::max(sp, res);
	}
	return res;
}

void Span::addNumbers(std::vector<int>::iterator begin,
					  	std::vector<int>::iterator end) {
	if (end - begin < 0 || end - begin > this->n - static_cast<int>(this->array.size()))
		throw std::exception();
	this->array.insert(this->array.end(), begin, end);
}

const std::vector<int> & Span::give_numbers() const {
	return this->array;
}

std::ostream &operator<<(std::ostream &o, Span const &a) {
	o << "{ ";
	std::vector<int> v = a.give_numbers();
	for (unsigned int i = 0; i < v.size(); i++)
		o<< v[i] << " ";
	o << "}";
	return o;
}