#include "abomination.h"

template <typename T>
MutantStack<T>::MutantStack(): std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(std::stack<T> const &container): MutantStack<T>(container) {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {return this->c.begin();}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {return this->c.end();}

template <typename T>
typename MutantStack<T>::riterator MutantStack<T>::rbegin() {return this->c.rbegin();}

template <typename T>
typename MutantStack<T>::riterator MutantStack<T>::rend() {return this->c.rend();}

template <typename T>
typename MutantStack<T>::citerator MutantStack<T>::cbegin() {return this->c.cbegin();}

template <typename T>
typename MutantStack<T>::citerator MutantStack<T>::cend() {return this->c.cend();}

template <typename T>
typename MutantStack<T>::criterator MutantStack<T>::crbegin() {return this->c.crbegin();}

template <typename T>
typename MutantStack<T>::criterator MutantStack<T>::crend() {return this->c.crend();}

template <typename T>
std::stack<T> &MutantStack<T>::operator=(std::stack<T> const &container) const {
    std::stack<T>::operator=(container);
    return *this;
}