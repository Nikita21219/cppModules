#include "Bureaucrat.h"

std::ostream &operator << (std::ostream &out, const Bureaucrat &object) {
    return out << object.getName() << ", bureaucrat grade " << object.getGrade();
}

int main() {
    // {
    //     Bureaucrat sam = Bureaucrat("Sam");
    //     std::cout << sam << std::endl;

    //     try {
    //         sam.incrementGrade();
    //     } catch (std::exception & e) {
    //         std::cout << "MESSAGE 1: " << e.what() << std::endl;
    //     }

    //     std::cout << sam << std::endl;

    //     for (size_t i = 0; i < 149; i++)
    //         sam.decrementGrade();
    //     std::cout << std::endl;

    //     std::cout << sam << std::endl;
    //     try {
    //         sam.decrementGrade();
    //     } catch (std::exception & e) {
    //         std::cout << "MESSAGE 2: " << e.what() << std::endl;
    //     }

    //     std::cout << std::endl;
    //     std::cout << sam << std::endl;
    // }

    // {
    //     Bureaucrat bob("Bob", 19);
    //     std::cout << bob << std::endl;
    // }
    
    // {
    //     try {
    //         Bureaucrat bob("Bob", 190);
    //         std::cout << bob << std::endl;
    //     }
    //     catch(const std::exception& e) {
    //         std::cerr << e.what() << '\n';
    //     }
    // }

    // {
    //     try {
    //         Bureaucrat bob("Bob", 0);
    //         std::cout << bob << std::endl;
    //     }
    //     catch(const std::exception& e) {
    //         std::cerr << e.what() << '\n';
    //     }
    // }
    return 0;
}
