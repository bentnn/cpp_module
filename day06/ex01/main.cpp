#include <iostream>

typedef struct Data {
	int a;
	int b;
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data *my_data = new Data;
	uintptr_t temp;

	my_data->a = 322;
	my_data->b = 228;
	std::cout << "Before serializing. a: " << my_data->a << ", b: " << my_data->b << std::endl;
	temp = serialize(my_data);
	delete my_data;
	my_data = deserialize(temp);
	std::cout << "After serializing. a: " << my_data->a << ", b: " << my_data->b << std::endl;
}