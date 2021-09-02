#include "conversion.hpp"

void print_int(char const *arg)
{
	std::string str(arg);
	int i = atoi(arg);
	std::cout << "char: ";
	if (i < 0 || i > 255)
		std::cout << "impossible\n";
	else
	{
		if (i > 126 || i < 33)
			std::cout << "Non displayable\n";
		else
			std::cout << static_cast<char>(i) << std::endl;
	}
}

void print_char(char const *arg)
{

}

void print_float(char const *arg)
{

}

void print_double(char const *arg)
{

}


int main(int argc, char *argv[])
{
	if (argc != 2)
		return (1);
	switch (what_type_is_it(argv[1])) {
		case 1:
			print_int(argv[1]);
			return (0);
		case 2:
			print_char(argv[1]);
			return (0);
		case 3:
			print_float(argv[1]);
			return (0);
		case 4:
			print_double(argv[1]);
			return (0);
	}
	return (1);
}
