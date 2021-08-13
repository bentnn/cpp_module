#include <iostream>
#include <fstream>

int main(int argc, char **argv) {
	if (argc != 4)
	{
		std::cerr << "i need 3 args\n";
		return (1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cerr << "i need not empty s1 and s2\n";
		return (1);
	}
	std::ifstream out(argv[1]);
	if (!out)
	{
		std::cerr << "your file is bad\n";
		return (1);
	}
	std::ofstream in((std::string)argv[1] + ".replace");
	if (!in)
	{
		std::cerr << "sorry, i can't open file to write\n";
		return (1);
	}

	std::string str;
	std::string s1 = (std::string)argv[2];
	std::string s2 = (std::string)argv[3];
	std::size_t find;

	while (std::getline(out, str))
	{
		find = 0;
		while ((find = str.find(s1, find)) != std::string::npos)
		{
			str.erase(find, s1.length());
			str.insert(find, s2);
			find += s2.length();
		}
		in << str << "\n";
	}
	out.close();
	in.close();
}
