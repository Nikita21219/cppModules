#include "Bureaucrat.h"

class Intern {
public:
    Intern();
    ~Intern();
    Form *makeForm(std::string name, const std::string &target);
    static Form *createShrubberyCreationForm(const std::string &target);
    static Form *createRobotomyRequestForm(const std::string &target);
    static Form *createPresidentialPardonForm(const std::string &target);
};
