#include "conversion.hpp"

void print_int(char *arg)
{
	std::string str(arg);
	int i;
	if ((arg[0] != '-' && (strlen(arg) > 10 || (strlen(arg) == 10 && strcmp(arg, "2147483647") > 0)))
		|| (arg[0] == '-' && (strlen(arg) > 11 || (strlen(arg) == 11 && strcmp(&arg[1], "2147483648") > 0))))
	{
		std::cout << "char: impossible\nint: impossible\n"
					 "float: impossible\ndouble: impossible\n";
		return;
	}
	else
		i = stoi(str);
	print_char_from_int(i);
	std::cout << "int: " << i << std::fixed << std::setprecision(1) << "\nfloat: " << static_cast<float>(i)
		<< "f\ndouble: " << static_cast<double>(i) << std::endl;
}

void print_char(char const *arg)
{
	std::cout << "char: " << arg[0] << "\nint: " << static_cast<int>(arg[0])
		<< "\nfloat: " << static_cast<float>(arg[0])
		<< "\ndouble: " << static_cast<double>(arg[0]) << std::endl;
}

void print_float(char *arg)
{
	if (strcmp(arg, "+inff") == 0 || strcmp(arg, "-inff") == 0 || strcmp(arg, "nanf") == 0)
	{
		if (arg[0] == 'n')
			arg[3] = 0x0;
		else
			arg[4] = 0x0;
		print_inf_nan(arg);
		return;
	}

	print_int_and_char(arg);
	print_float_and_double(std::string(arg));
}

void print_double(char *arg)
{
	if (strcmp(arg, "+inf") == 0 || strcmp(arg, "-inf") == 0 || strcmp(arg, "nan") == 0)
	{
		print_inf_nan(arg);
		return;
	}

	print_int_and_char(arg);
	print_float_and_double(std::string(arg));
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
