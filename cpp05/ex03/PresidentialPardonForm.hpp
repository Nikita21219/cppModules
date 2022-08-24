#include "Bureaucrat.h"

class PresidentialPardonForm : public Form {
public:
    PresidentialPardonForm(std::string target);
    virtual ~PresidentialPardonForm();
    void execute(Bureaucrat const &executor) const;
};
