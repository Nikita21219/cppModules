#include "Bureaucrat.h"

class Form {
private:
    const std::string name;
    bool isSign;
    const int gradeSign;
    const int gradeExec;
    std::string target;

public:
    Form(std::string name, int gradeSign, int gradeExec, std::string target);
    ~Form();
    std::string getName() const;
    int getSign() const;
    int getGradeSign() const;
    int getGradeExec() const;
    std::string getTarget() const;
    void beSigned(Bureaucrat bureaucrat);
    virtual void execute(Bureaucrat const &executor) const = 0;

    class CantExecuteException : public std::exception {
    public:
        CantExecuteException() {};
        virtual const char *what() const throw() {return "I can't execute (form)";}
    };
};
