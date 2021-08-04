#ifndef CPP_MODULE_PHONEBOOK_H
#define CPP_MODULE_PHONEBOOK_H

#include <iostream>
#include "Contact.h"

class PhoneBook {
public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();
private:
	int cur;
	Contact array[8];
};


#endif
