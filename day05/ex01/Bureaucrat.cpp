#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a): name(a.name), grade(a.grade) {
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &a) {
	this->name = a.name;
	this->grade = a.grade;
	return (*this);
}

std::string Bureaucrat::getName() const {
	return (this->name);
}

int Bureaucrat::getGrade() const {
	return (this->grade);
}

void Bureaucrat::increment_grade() {
	if (this->grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade--;
}

void Bureaucrat::decrement_grade() {
	if (this->grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->grade++;
}

void Bureaucrat::signForm(Form &a) const {
	std::cout << "bureaucrat " << this->name;
	if (a.getGradeToSignin() < this->grade)
		std::cout << " cannot sign form '"
			<< a.getName() << "' because his grade is too low\n";
	else
	{
		a.beSigned(*this);
		std::cout << " sign form '" << a.getName() << "'\n";
	}
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &a) {
	o << a.getName() << ", bureaucrat grade " << a.getGrade();
	return o;
}