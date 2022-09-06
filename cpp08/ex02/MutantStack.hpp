#include "abomination.h"

template <typename T>
class MutantStack : public std::stack<T> {
public:
    typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator riterator;
    typedef typename std::stack<T>::container_type::const_iterator citerator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator criterator;

    MutantStack();
    ~MutantStack();
    MutantStack(std::stack<T> const &container);
    std::stack<T> &operator=(std::stack<T> const &container) const;
    iterator begin();
    iterator end();
    riterator rbegin();
    riterator rend();
    citerator cbegin();
    citerator cend();
    criterator crbegin();
    criterator crend();
};
