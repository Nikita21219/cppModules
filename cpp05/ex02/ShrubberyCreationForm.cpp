#include "Bureaucrat.h"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
Form("ShrubberyCreationForm", 145, 137, target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (this->getSign() && executor.getGrade() <= this->getGradeExec()) {
        std::ofstream outfile(getTarget() + "_shrubbery");
        outfile << "              v .   ._, |_  .," << "\n" <<
        "           `-._|/  .  | /    |/_" << "\n" <<
        "               ||  _|, y | |//" << "\n" <<
        "         _|_.___||, ||/ -.|||" << "\n" <<
        "           `7-,--.`._||  / / ," << "\n" <<
        "           /'     `-. `./ / |/_.'" << "\n" <<
        "                     |    |//" << "\n" <<
        "                     |_    /" << "\n" <<
        "                     |-   |" << "\n" <<
        "                     |   =|" << "\n" <<
        "                     |    |" << "\n" <<
        "--------------------/ ,  . |--------._";
    } else
        throw Form::CantExecuteException();
}
