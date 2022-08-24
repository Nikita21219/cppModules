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
    if (grade - 1 < 0)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form form) {
    if (form.getSign())
        std::cout << this->getName() << " signed " << form.getName() << std::endl;
    else {
        try {
            form.beSigned(*this);
            std::cout << this->getName() << " signed " << form.getName() << std::endl;
        }
        catch(const std::exception& e) {
            std::cout << this->getName() << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
        }
    }
}
