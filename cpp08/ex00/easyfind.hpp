#include "easyfind.h"

class NotFoundEl : public std::exception {
public:
    NotFoundEl() {};
    virtual const char *what() const throw() {return "Element not in container!";};
};

template <typename T>
int easyfind(T &container, int num) {
    for (size_t i = 0; i < container.size(); i++)
        if (num == container.at(i))
            return num;
    throw NotFoundEl();
}
