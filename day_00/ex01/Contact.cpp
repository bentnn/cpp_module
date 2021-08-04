#include "Contact.h"

Contact::Contact() {}
Contact::~Contact() {}

void Contact::print_about_me() {
	std::cout << "First name " << first_name << std::endl;
	std::cout << "Last name " << last_name << std::endl;
	std::cout << "Nickname " << nickname << std::endl;
	std::cout << "Phone number " << phone_number << std::endl;
	std::cout << "Darkest secret " << darkest_secret << std::endl;
}

std::string Contact::get_first_name() const {
	return (this->first_name);
}

std::string Contact::get_last_name() const {
	return (this->last_name);
}

std::string Contact::get_nickname() const {
	return (this->nickname);
}

std::string Contact::get_phone_number() const {
	return (this->phone_number);
}

std::string Contact::get_darkest_secret() const {
	return (this->darkest_secret);
}

void Contact::set_first_name(const std::string *value) {
	this->first_name = *value;
}

void Contact::set_last_name(const std::string *value) {
	this->last_name = *value;
}

void Contact::set_phone_number(const std::string *value) {
	this->phone_number = *value;
}

void Contact::set_nickname(const std::string *value) {
	this->nickname = *value;
}

void Contact::set_darkest_secret(const std::string *value) {
	this->darkest_secret = *value;
}