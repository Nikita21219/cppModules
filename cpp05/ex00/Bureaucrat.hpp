#include "Bureaucrat.h"

class Bureaucrat {
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string name);
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    const char* what() const _NOEXCEPT;
    std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();

    class GradeTooHighException : public std::exception {
    public:
        GradeTooHighException() {};
        virtual const char *what() const throw() {return "Grade too high";}
    };

    class GradeTooLowException : public std::exception {
    public:
        GradeTooLowException() {};
        virtual const char *what() const throw() {return "Grade too low";}
    };
};
