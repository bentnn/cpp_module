#ifndef CPP_MODULE_BUREAUCRAT_HPP
#define CPP_MODULE_BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
private:
	std::string name;
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
