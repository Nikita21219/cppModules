#include "Bureaucrat.h"

std::ostream &operator << (std::ostream &out, const Bureaucrat &object) {
    return out << object.getName() << ", bureaucrat grade " << object.getGrade();
}

std::ostream &operator << (std::ostream &out, const Form &object) {
    return out << "Name = " << object.getName() << ", gradeExec = " << object.getGradeExec() << ", gradeSign = " << object.getGradeSign();
}

int main() {
    // {
    //     Bureaucrat sam("Sam");
    //     Form form("form1", 10, 10);
    //     std::cout << form << std::endl;
    //     sam.decrementGrade();
    //     std::cout << sam << std::endl;
    //     sam.signForm(form);
    // }

    // {
    //     Bureaucrat sam("Sam", 10);
    //     Form form("form1", 1, 1);
    //     std::cout << sam << std::endl;
    //     sam.signForm(form);
    // }
    return 0;
}
