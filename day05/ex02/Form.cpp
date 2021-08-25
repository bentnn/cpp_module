#include "Form.hpp"

Form::Form(std::string name, int grade_to_signin, int grade_to_execute):
		name(name), is_signed(false),
		grade_to_signin(grade_to_signin), grade_to_execute(grade_to_execute) {
	if (grade_to_execute < 1 ||  grade_to_signin < 1)
		throw Form::GradeTooHighException();
	if (grade_to_execute > 150 || grade_to_signin > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &a): name(a.name), is_signed(a.is_signed),
	grade_to_signin(a.grade_to_signin), grade_to_execute(a.grade_to_execute){
}

Form::~Form() {
}

std::string Form::getName() const {
	return this->name;
}

int Form::getGradeToSignin() const {
	return  this->grade_to_signin;
}

int Form::getGradeToExecute() const {
	return this->grade_to_execute;
}

bool Form::isSigned() const {
	return this->is_signed;
}

Form & Form::operator=(const Form &a) {
	this->is_signed = a.is_signed;
	return (*this);
}

void Form::beSigned(const Bureaucrat &a) {
	if (a.getGrade() <= this->grade_to_signin)
		this->is_signed = true;
	else
		throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &o, Form const &a) {
	o << "Form '" << a.getName() << "' with grade to sign in " << a.getGradeToSignin()
		<< " and grade to execute " << a.getGradeToExecute() << " is";
	if (!a.isSigned())
		o << " not";
	o << " signed";
	return o;
}
