#ifndef CPP_MODULE_CONTACT_H
#define CPP_MODULE_CONTACT_H

# include <iostream>

class Contact {
public:
	Contact( void );
	~Contact( void );

	void print_about_me();

	std::string get_first_name() const;
	std::string get_last_name() const;
	std::string get_nickname() const;
	std::string get_phone_number() const;
	std::string get_darkest_secret() const;

	void set_first_name(const std::string *value);
	void set_last_name(const std::string *value);
	void set_nickname(const std::string *value);
	void set_phone_number(const std::string *value);
	void set_darkest_secret(const std::string *value);
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};


#endif
