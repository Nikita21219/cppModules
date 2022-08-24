#include "Bureaucrat.h"

PresidentialPardonForm::PresidentialPardonForm(std::string target):
Form("PresidentialPardonForm", 25, 5, target) {srand(time(NULL));}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
    if (this->getSign() && executor.getGrade() <= this->getGradeExec()) {
        std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    } else
        throw Form::CantExecuteException();
}
