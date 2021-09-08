#ifndef CPP_MODULE_SPAN_HPP
#define CPP_MODULE_SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
public:
	Span(unsigned int n);
	Span(Span const &src);
	~Span();
	Span &operator=(Span const &src);
	void addNumber(int ch);
	int shortestSpan() const;
	int longestSpan() const;
	void addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	std::vector<int> const &give_numbers() const;
private:
	unsigned int n;
	std::vector<int> array;
};

std::ostream &operator<<(std::ostream &o, Span const &a);


#endif
