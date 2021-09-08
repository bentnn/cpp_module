#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <vector>

template<typename T>
typename T::const_iterator easyfind(T const &array, int ch) {
	return std::find(array.begin(), array.end(), ch);
}

#endif
