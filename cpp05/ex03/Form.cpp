#include "Bureaucrat.h"

Form::Form(std::string name, int gradeSign, int gradeExec, std::string target): 
name(name), gradeSign(gradeSign), gradeExec(gradeExec), target(target) {
    isSign = false;
}

Form::~Form() {}

std::string Form::getName() const {return name;}

int Form::getSign() const {return isSign;}

int Form::getGradeSign() const {return gradeSign;}

int Form::getGradeExec() const {return gradeExec;}

std::string Form::getTarget() const {return target;}

void Form::beSigned(Bureaucrat bureaucrat) {
    if (bureaucrat.getGrade() <= gradeSign)
        isSign = true;
    else
        throw Form::CantExecuteException();
}
