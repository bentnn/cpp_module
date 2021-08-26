#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
public:
	Form(std::string name, int grade_to_signin, int grade_to_execute);
	Form(Form const &a);
	virtual ~Form();
	Form &operator=(Form const &a);
	void beSigned(Bureaucrat const &a);
	std::string getName() const;
	int getGradeToSignin() const;
	int getGradeToExecute() const;
	bool isSigned() const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	void catWeExec(Bureaucrat const & executor) const;
	void set_target(std::string target);
	std::string get_target() const;

private:
	std::string target;
	std::string const name;
	bool is_signed;
	int const grade_to_signin;
	int const grade_to_execute;

	class GradeTooHighException : public std::exception {
		virtual const char* what() const throw() {
			return ("Grade is too high");
		}
	};

	class FormIsNotSignedException : public std::exception {
		virtual const char* what() const throw() {
			return ("The form is not signed when trying to execute");
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
