#include "Bureaucrat.h"

std::ostream &operator << (std::ostream &out, const Bureaucrat &object) {
    return out << object.getName() << ", bureaucrat grade " << object.getGrade();
}

std::ostream &operator << (std::ostream &out, const Form &object) {
    return out << "Name = " << object.getName() << ", gradeExec = " << object.getGradeExec() << ", gradeSign = " << object.getGradeSign();
}

int main() {
    // {
    //     Intern intern;
    //     Form *form = intern.makeForm("sdaf", "home");
    //     if (form == NULL)
    //         std::cout << "Name does not exists" << std::endl;
    // }

    // {
    //     Intern intern;
    //     Form *form = intern.makeForm("ShrubberyCreationForm", "test1");
    //     if (form == NULL)
    //         std::cout << "Name does not exists" << std::endl;
    //     std::cout << "Form " << form->getName() << " creates successfull" << std::endl;
    // }

    // {
    //     Intern intern;
    //     Form *form = intern.makeForm("RobotomyRequestForm", "test2");
    //     if (form == NULL)
    //         std::cout << "Name does not exists" << std::endl;
    //     std::cout << "Form " << form->getName() << " creates successfull" << std::endl;
    // }

    // {
    //     Intern intern;
    //     Form *form = intern.makeForm("PresidentialPardonForm", "test3");
    //     if (form == NULL)
    //         std::cout << "Name does not exists" << std::endl;
    //     std::cout << "Form " << form->getName() << " creates successfull" << std::endl;
    // }
    return 0;
}
