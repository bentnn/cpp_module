#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(std::string name, int grade_to_signin, int grade_to_execute);
	Form(Form const &a);
	~Form();
	Form &operator=(Form const &a);
	void beSigned(Bureaucrat const &a);
	std::string getName() const;
	int getGradeToSignin() const;
	int getGradeToExecute() const;
	bool isSigned() const;

private:
	std::string const name;
	bool is_signed;
	int const grade_to_signin;
	int const grade_to_execute;

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

std::ostream &operator<<(std::ostream &o, Form const &a);



#endif //CPP_MODULE_FORM_HPP
