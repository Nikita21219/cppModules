#include "abomination.h"

typedef std::stack<int>::container_type::iterator iterator;
typedef std::stack<int>::container_type::reverse_iterator riterator;
typedef std::stack<int>::container_type::const_iterator citerator;
typedef std::stack<int>::container_type::const_reverse_iterator criterator;

int main() {
    {
        // Create stack
        MutantStack<int> mstack;
        mstack.push(42);
        mstack.push(21);
        std::cout << "mstack top:\n" << mstack.top() << std::endl;
        std::cout << std::endl;

        // Test copy constructor
        MutantStack<int> copyMstack(mstack);
        std::cout << "copyMstack top:\n" << copyMstack.top() << std::endl;
        std::cout << std::endl;

        // Test operator assigment
        MutantStack<int> operatorAssigmentMstack = mstack;
        std::cout << "operatorAssigmentMstack top:\n" << operatorAssigmentMstack.top() << std::endl;
        std::cout << std::endl;
    }

    // // Test iterators
    // {
    //     // Create and fill
    //     MutantStack<int> mstack;
    //     for (size_t i = 0; i < 10; i++)
    //         mstack.push(i + 1);

    //     // Iterator
    //     std::cout << "Iterator: " << std::endl;
    //     for (iterator i = mstack.begin(); i < mstack.end(); i++)
    //         std::cout << *i << " ";
    //     std::cout << std::endl << std::endl;

    //     // Reverse iterator
    //     std::cout << "Reverse iterator: " << std::endl;
    //     for (riterator i = mstack.rbegin(); i < mstack.rend(); i++)
    //         std::cout << *i << " ";
    //     std::cout << std::endl << std::endl;

    //     // Const iterator
    //     std::cout << "Const iterator: " << std::endl;
    //     for (citerator i = mstack.cbegin(); i < mstack.cend(); i++)
    //         std::cout << *i << " ";
    //     std::cout << std::endl << std::endl;

    //     // Const reverse iterator
    //     std::cout << "Const reverse iterator: " << std::endl;
    //     for (criterator i = mstack.crbegin(); i < mstack.crend(); i++)
    //         std::cout << *i << " ";
    //     std::cout << std::endl << std::endl;
    // }

    // // Subject test
    // {
    //     MutantStack<int> mstack;
    //     mstack.push(5);
    //     mstack.push(17);
    //     std::cout << mstack.top() << std::endl;
    //     mstack.pop();
    //     std::cout << mstack.size() << std::endl;
    //     mstack.push(3);
    //     mstack.push(5);
    //     mstack.push(737);
    //     mstack.push(0);
    //     MutantStack<int>::iterator it = mstack.begin();
    //     MutantStack<int>::iterator ite = mstack.end();
    //     ++it;
    //     --it;
    //     while (it != ite) {
    //         std::cout << *it << std::endl;
    //         ++it;
    //     }
    //     std::stack<int> s(mstack);
    // }

    return 0;
}
