#include "Array.hpp"

template<typename T>
void output_array(Array<T> &array, std::string name)
{
	std::cout << name << ": ";
	for (unsigned int i = 0; i < array.size() - 1; i++)
		std::cout << array[i] << " ";
	std::cout << array[array.size() - 1] << std::endl;
}

int main() {
	Array<int> array;
	Array<int> array2(10);
	output_array(array2, "array2");
	for (unsigned int i = 0; i < array2.size(); i++)
		array2[i] = i;
	array = array2;
	output_array(array, "array");
	output_array(array2, "array2");
	try {
		std::cout << array[21] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}