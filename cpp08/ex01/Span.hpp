#include "span.h"

typedef std::vector<int>::iterator iterator;

class Span {
private:
    unsigned int n;
    std::vector<int> array;

public:
    Span(unsigned int n);
    ~Span();
    void addNumber(int num);
    int shortestSpan();
    int longestSpan();
    void addNumbers(iterator begin, iterator end);

    void checkSize();
    int &operator[](int idx);
    unsigned int getSize() const;

    class FullSpanException : public std::exception {
    public:
        virtual const char *what() const throw() {return "Span is full over";}
    };

    class NoSpanCanBeFound : public std::exception {
    public:
        virtual const char *what() const throw() {return "No span can be found";}
    };
};
