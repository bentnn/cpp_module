#include "conversion.hpp"

void print_char_from_int(int i)
{
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

void print_inf_nan(char *arg)
{
	std::cout << "char: impossible\nint: impossible\nfloat: "<< arg
			  << "f\ndouble: " << arg << std::endl;
}

void print_int_and_char(char *arg)
{
	int i;

	if ((arg[0] != '-' && (strlen(arg) > 10 || (strlen(arg) == 10 && strcmp(arg, "2147483647") > 0)))
		|| (arg[0] == '-' && (strlen(arg) > 11 || (strlen(arg) == 11 && strcmp(&arg[1], "2147483648") > 0))))
		std::cout << "char: impossible\nint: impossible\n";
	else
	{
		i = atoi(arg);
		print_char_from_int(i);
		std::cout << "int: " << i << std::endl;
	}
}

void print_float_and_double(std::string str)
{
	try {
		float tempf = std::stof(str);
		std::cout << std::fixed << std::setprecision(1) << "float: " << tempf << "f\n";
	}
	catch (std::out_of_range) {
		std::cout << "float: impossible\n";
	}
	try {
		double tempd = std::stod(str);
		std::cout << std::fixed << std::setprecision(1) << "double: " << tempd << "\n";
	}
	catch (std::out_of_range) {
		std::cout << "double: impossible\n";
	}
}