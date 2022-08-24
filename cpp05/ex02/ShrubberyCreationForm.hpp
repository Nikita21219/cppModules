#include "Bureaucrat.h"

class ShrubberyCreationForm : public Form {
public:
    ShrubberyCreationForm(std::string target);
    virtual ~ShrubberyCreationForm();
    void execute(Bureaucrat const &executor) const;
};
