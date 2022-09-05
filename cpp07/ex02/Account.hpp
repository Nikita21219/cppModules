#include "account.h"

template <typename T>
class Account {
private:
    unsigned int length;
    T *array;

public:
    Account();
    Account(unsigned int n);
    ~Account();
    Account(const Account<T> &other);
    Account<T> &operator=(Account<T> &other);
    T &operator[](int idx);
    unsigned int size();

    class IndexOutOfRange : public std::exception {
    public:
        IndexOutOfRange() {};
        virtual const char *what() const throw() {return "Index out of range!";};
    };
};
