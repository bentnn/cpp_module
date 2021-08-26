#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &a);
	Bureaucrat &operator=(Bureaucrat const &a);
	~Bureaucrat();
	void increment_grade();
	void decrement_grade();
	std::string getName() const;
	int getGrade() const;
	void signForm(Form &a) const;
private:
	std::string const name;
	int grade;

class GradeTooHighException : public std::exception {
	virtual const char* what() const throw() {
		return ("Grade is too high");
	}
};

class GradeTooLowException : public std::exception {
	virtual const char* what() const throw() {
		return ("Grade is too low");
	}
};

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &a);

#endif
