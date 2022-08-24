#include "Bureaucrat.h"

RobotomyRequestForm::RobotomyRequestForm(std::string target):
Form("RobotomyRequestForm", 72, 45, target) {srand(time(NULL));}

RobotomyRequestForm::~RobotomyRequestForm() {}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
    std::cout << "Drrrrrrr...." << std::endl;
    if (this->getSign() && executor.getGrade() <= this->getGradeExec()) {
        if (rand() % 2)
            std::cout << "Robotomy successfull" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    } else
        throw Form::CantExecuteException();
}
