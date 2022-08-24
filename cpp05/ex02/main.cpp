#include "Bureaucrat.h"

std::ostream &operator << (std::ostream &out, const Bureaucrat &object) {
    return out << object.getName() << ", bureaucrat grade " << object.getGrade();
}

std::ostream &operator << (std::ostream &out, const Form &object) {
    return out << "Name = " << object.getName() << ", gradeExec = " << object.getGradeExec() << ", gradeSign = " << object.getGradeSign();
}

int main() {
    // {
    //     ShrubberyCreationForm ShrubberyForm("test");
    //     std::cout << ShrubberyForm << std::endl;
    //     Bureaucrat sam("Sam", 150);
    //     std::cout << sam << std::endl;
    //     std::cout << std::endl;

    //     sam.signForm(ShrubberyForm);
    //     sam.executeForm(ShrubberyForm);
    //     std::cout << std::endl << std::endl;


    //     PresidentialPardonForm PresidentialForm("test2");
    //     sam.signForm(PresidentialForm);
    //     std::cout << sam << std::endl;
    //     sam.executeForm(PresidentialForm);
    //     std::cout << std::endl << std::endl;


    //     RobotomyRequestForm RobotomyForm("test3");
    //     sam.signForm(RobotomyForm);
    //     std::cout << sam << std::endl;
    //     sam.executeForm(RobotomyForm);
    //     std::cout << std::endl << std::endl;
    // }

    {
        ShrubberyCreationForm ShrubberyForm("test");
        Bureaucrat sam("Sam");
        sam.signForm(ShrubberyForm);
        std::cout << sam << std::endl;
        sam.executeForm(ShrubberyForm);
        std::cout << std::endl << std::endl;


        PresidentialPardonForm PresidentialForm("test2");
        sam.signForm(PresidentialForm);
        std::cout << sam << std::endl;
        sam.executeForm(PresidentialForm);
        std::cout << std::endl << std::endl;


        RobotomyRequestForm RobotomyForm("test3");
        sam.signForm(RobotomyForm);
        std::cout << sam << std::endl;
        sam.executeForm(RobotomyForm);
        std::cout << std::endl << std::endl;
    }
    return 0;
}
