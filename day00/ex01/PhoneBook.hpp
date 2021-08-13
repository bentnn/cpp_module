#ifndef CPP_MODULE_PHONEBOOK_HPP
#define CPP_MODULE_PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search() const;
private:
	std::string print_in_ten_symb(std::string str) const;
	int cur;
	int size;
	Contact array[8];
};


#endif
