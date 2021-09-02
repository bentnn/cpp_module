#include "conversion.hpp"

static bool is_int(char const *arg)
{
	int i = 0;

	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (!std::isdigit(arg[i]))
			return false;
		i++;
	}
	return true;
}

static bool is_char(char const *arg)
{
	return (arg[1] == '\0' && !std::isdigit(arg[0]));
}

static bool is_float(char const *arg)
{
	int i = 0;
	int points = 0;

	if (std::strcmp(arg, "-inff") == 0 || std::strcmp(arg, "+inff") == 0
			|| std::strcmp(arg, "nanf") == 0)
		return true;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (arg[i] == '.')
		{
			points++;
			if (points > 1)
				return false;
		}
		else if (arg[i] == 'f')
			break;
		else if (!std::isdigit(arg[i]))
			return false;
		i++;
	}
	return (points < 2 && arg[i] == 'f' && arg[i + 1] == '\0');
}

static bool is_double(char const *arg)
{
	int i = 0;
	int points = 0;

	if (std::strcmp(arg, "-inf") == 0 || std::strcmp(arg, "+inf") == 0
		|| std::strcmp(arg, "nan") == 0)
		return true;
	if (arg[0] == '-')
		i++;
	while (arg[i])
	{
		if (arg[i] == '.')
		{
			points++;
			if (points > 1)
				return false;
		}
		else if (!std::isdigit(arg[i]))
			return false;
		i++;
	}
	return (points < 2);
}

int what_type_is_it(const char *arg)
{
	if (is_int(arg))
		return (1);
	if (is_char(arg))
		return (2);
	if (is_float(arg))
		return (3);
	if (is_double(arg))
		return (4);
	return (0);
}