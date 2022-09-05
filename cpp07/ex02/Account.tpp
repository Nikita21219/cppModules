#include "account.h"

template <typename T>
Account<T>::Account() {
    array = NULL;
    length = 0;
}

template <typename T>
Account<T>::Account(unsigned int n) {
    length = n;
    array = new T[n];
}

template <typename T>
Account<T>::~Account() {delete[] array;}

template <typename T>
Account<T>::Account(const Account<T> &other) {
    this->array = new T[other.length];
    this->length = other.length;
    for (unsigned int i = 0; i < other.length; i++)
        this->array[i] = other.array[i];
}

template <typename T>
Account<T> &Account<T>::operator=(Account<T>& other)
{
    this->length = other.length;
    for (unsigned int i = 0; i < other.length; i++)
        this->array[i] = other.array[i];
    return *this;
}

template <typename T>
T &Account<T>::operator[](int idx) {
    if (idx < 0 || static_cast<unsigned int>(idx) >= length)
        throw Account<T>::IndexOutOfRange();
    return array[idx];
}

template <typename T>
unsigned int Account<T>::size() {return length;}
