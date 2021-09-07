#ifndef ITER_HPP
#define ITER_HPP

template<typename T>

void iter(T const *array, unsigned int len, void f(T const &x)) {
	if (!array)
		return;
	for (unsigned int i = 0; i < len; i++) {
		f(array[i]);
	}
}

#endif
