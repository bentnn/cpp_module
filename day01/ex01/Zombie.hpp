#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {
public:
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);
	void set_name(std::string const &str);
	void announce(void) const;

private:
	std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
