#include "Bureaucrat.h"

Bureaucrat::Bureaucrat(std::string name): name(name) {grade = 1;}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name) {
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

std::string Bureaucrat::getName() const {return name;}

int Bureaucrat::getGrade() const {return grade;}

void Bureaucrat::incrementGrade() {
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}
