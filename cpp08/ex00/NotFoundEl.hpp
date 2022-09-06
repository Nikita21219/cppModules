#include "easyfind.h"

class NotFoundEl : public std::exception {
public:
    NotFoundEl();
    virtual const char *what() const throw();
};
