#include "Bureaucrat.h"

Form::Form(std::string name, int gradeSign, int gradeExec): 
name(name), gradeSign(gradeSign), gradeExec(gradeExec) {
    isSign = false;
}

Form::~Form() {}

std::string Form::getName() const {return name;}

int Form::getSign() const {return isSign;}

int Form::getGradeSign() const {return gradeSign;}

int Form::getGradeExec() const {return gradeExec;}

void Form::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() <= gradeSign)
        isSign = true;
    else
        throw Form::GradeTooLowException();
}
