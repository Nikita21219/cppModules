#include "span.h"

Span::Span(unsigned int n) {
    this->n = n;
    this->array.reserve(n);
}

Span::~Span() {}

void Span::addNumber(int num) {
    if (array.size() >= n)
        throw FullSpanException();
    array.push_back(num);
}

int Span::longestSpan() {
    checkSize();
    std::sort(array.begin(), array.end());
    return array.at(array.size() - 1) - array.at(0);
}

int Span::shortestSpan() {
    int tmp_span;
    int shortest_span = longestSpan();

    checkSize();
    for (size_t i = 0; i < array.size(); i++) {
        for (size_t j = 0; j < array.size(); j++) {
            if (j == i)
                continue;
            tmp_span = abs(array.at(i) - array.at(j));
            if (tmp_span < shortest_span || (i == 0 && j == 0))
                shortest_span = tmp_span;
            if (shortest_span == 0)
                return 0;
        }
    }
    return shortest_span;
}

void Span::checkSize() {
    if (array.size() < 2)
        throw NoSpanCanBeFound();
}

void Span::addNumbers(iterator begin, iterator end) {
    for (iterator it = begin; it != end; it++)
        addNumber(*it);
}

int &Span::operator[](int idx) {return array.at(idx);}

unsigned int Span::getSize() const {return n;}
