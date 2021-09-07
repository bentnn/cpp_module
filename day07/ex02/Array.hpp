#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array {
public:
	Array(): array(new T[0]), len(0) {};
	Array(unsigned int n): array(new T[n]), len(n) {
		for (unsigned int i = 0; i < n; i++)
			this->array[i] = T();
	};
	~Array() {
		delete [] this->array;
	}
	Array &operator=(Array &a) {
		this->len = a.size();
		delete [] this->array;
		this->array = new T[this->len];
		for (unsigned int i = 0; i < this->len; i++)
			this->array[i] = a[i];
		return *this;
	}
	Array(Array &a) {
		*this = a;
	}
	T &operator[](int i) {
		if (i < 0 || i >= static_cast<int>(this->len))
			throw std::out_of_range("size of array is "
				+ std::to_string(this->len) + " and "
				+ std::to_string(i) + " is out of range");
		return this->array[i];
	}
	unsigned int size() const{
		return this->len;
	}
private:
	T *array;
	unsigned int len;
};

#endif
