#include "Bureaucrat.h"

Intern::Intern() {}

Intern::~Intern() {}

Form *Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

Form *Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

Form *Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, const std::string &target) {
    Form *(*ptrsToFunc[])(const std::string &target) = {
        createShrubberyCreationForm,
        createRobotomyRequestForm,
        createPresidentialPardonForm
    };
    std::string formsName[] = {
        "ShrubberyCreationForm",
        "RobotomyRequestForm",
        "PresidentialPardonForm"
    };
    for (size_t i = 0; i < 3; i++)
        if (formsName[i] == formName)
            return ptrsToFunc[i](target);
    return NULL;
}
