#include <iostream>

typedef struct Data {
	std::string name;
	int age;
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

int main() {
	Data *me = new Data;
	uintptr_t temp;

	me->name = "Ben";
	me->age = 228;
	std::cout << "Before serializing. Name: " << me->name << ", age: " << me->age << std::endl;
	temp = serialize(me);
	delete me;
	me = deserialize(temp);
	std::cout << "After serializing. Name: " << me->name << ", age: " << me->age << std::endl;
}