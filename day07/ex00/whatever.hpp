#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T>
T min(T const &a, T const &b){
	return (b <= a ? b : a);
}

template<typename T>
T max(T const &a, T const &b){
	return (b >= a ? b : a);
}

template<typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

#endif
