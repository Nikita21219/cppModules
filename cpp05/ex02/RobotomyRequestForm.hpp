#include "Bureaucrat.h"

class RobotomyRequestForm : public Form {
public:
    RobotomyRequestForm(std::string target);
    virtual ~RobotomyRequestForm();
    void execute(Bureaucrat const &executor) const;
};
