#include "Bureaucrat.h"

class Form {
private:
    const std::string name;
    bool isSign;
    const int gradeSign;
    const int gradeExec;

public:
    Form(std::string name, int gradeSign, int gradeExec);
    ~Form();
    std::string getName() const;
    int getSign() const;
    int getGradeSign() const;
    int getGradeExec() const;
    void beSigned(Bureaucrat bureaucrat);

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException() {};
        virtual const char *what() const throw() {return "Grade too low (form)";}
    };

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException() {};
        virtual const char *what() const throw() {return "Grade too high (form)";}
    };
};
